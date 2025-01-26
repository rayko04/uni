#include <iostream>
#include <array>

namespace Animal
{
    enum Type
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        maxAnimals,
    };

    struct Data
    {
        std::string name{};
        int legs{};
        std::string sound{};
    };

    constexpr std::array types{chicken, dog, cat, elephant, duck, snake};
    constexpr std::array arr{
        Data{"chiken", 2, "cluck"},
        Data{"dog", 4, "woof"},
        Data{"cat", 4, "meow"},
        Data{"elephant", 4, "pawoo"},
        Data{"duck", 2, "quack"},
        Data{"snake", 0, "hissss"}};

    static_assert(std::size(types) == maxAnimals);
    static_assert(std::size(arr) == maxAnimals);
}

std::istream &operator>>(std::istream &in, Animal::Type &t)
{
    std::string input{};
    std::getline(in >> std::ws, input);

    for (std::size_t i = 0; i < Animal::arr.size(); i++)
    {
        if (input == Animal::arr[i].name)
        {
            t = static_cast<Animal::Type>(i);
            return in;
        }
    }

    in.setstate(std::ios_base::failbit);
    return in;
};

void printData(const Animal::Type &type)
{
    const Animal::Data &animal{Animal::arr[type]};
    std::cout << "A " << animal.name << " has " << animal.legs << " legs and says " << animal.sound << std::endl;
}

int main()
{
    std::cout << "Enter an Animal: ";
    Animal::Type type{};
    std::cin >> type;

    if (!std::cin)
    {
        std::cin.clear();
        std::cout << "That animal couldnt be found.\n";
        type = Animal::maxAnimals;
    }
    else
        printData(type);

    std::cout << "\nHere is the data for the rest of the animals:\n";
    for (auto a : Animal::types)
    {
        if (a != type)
            printData(a);
    }

    return 0;
}
