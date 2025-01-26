#include <iostream>

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

constexpr std::string_view getAnimalName(const Animal& a)
{
    using enum Animal;

    switch (a)
    {
        case pig: return "pig";
        case chicken: return "chicken";
        case goat: return "goat";
        case cat: return "cat";
        case dog: return "dog";
        case duck: return "duck";

        default: return "???";
    }
}

constexpr void printAnimalLegs(const Animal& a)
{
    std::cout << "A " << getAnimalName(a) << " has ";
    using enum Animal;

    switch (a)
    {
        case pig:
        case goat:
        case cat:
        case dog:
            std::cout << 4;
            break;

        case chicken:
        case duck:
            std::cout << 2;
            break;

        default:
            std::cout << "???";
    }

    std::cout << " legs" << '\n';

}

int main()
{
    printAnimalLegs(Animal::cat);
    printAnimalLegs(Animal::chicken);

    return 0;
}

