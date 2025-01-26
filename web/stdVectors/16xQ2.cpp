#include <iostream>
#include <vector>
#include <cassert>

namespace Items
{
    enum Types
    {
        potions,
        torches,
        arrows,
        max_items,
    };

    std::string_view getTypeNamesPlural(const Types& t)
    {
        switch (t)
        {
            case potions: return "potions";
            case torches: return "torches";
            case  arrows: return  "arrows";

            default: return "???";
        }
    }
    std::string_view getTypeNamesSingular(const Types& t)
    {
        switch (t)
        {
            case potions: return "potion";
            case torches: return "torch";
            case  arrows: return  "arrow";

            default: return "???";
        }
    }
}

int sum(const std::vector<int>& inven)
{
    int sum = 0;
    for(auto value: inven)
    {
        sum += value;
    }

    return sum;
}

void print(const std::vector<int>& inven)
{
    for(size_t j = 0; j < std::size(inven); j++)
    {
        bool plural {inven[j] != 1};
        std::cout << "You have " << inven[j] << " ";

        auto t { static_cast<Items::Types>(j) };
        std::cout << (plural ? Items::getTypeNamesPlural(t) : Items::getTypeNamesSingular(t))<< ".\n";
    }

    std::cout << "\nYou have total " << sum(inven) << " items.\n"; 
}


int main()
{
    std::vector inventory {1, 5, 100};

    assert(std::size(inventory) == Items::max_items);
    print(inventory);


    return 0;
}
