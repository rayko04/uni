#include <iostream>

enum MonsterType
{
    invalid,
    goblin,
    troll,
};

constexpr std::string_view getMonsterName(const MonsterType& a)
{
    switch (a)
    {
        case invalid: return "invalid";
        case goblin: return "goblin";
        case troll: return "troll";
        default: return "???";
    }
}

constexpr MonsterType getMonsterFromString(std::string_view str)
{
    if(str == "goblin") return goblin;
    if(str == "troll")  return troll;

    return invalid;
}

int main()
{
    std::string input;
    std::cout << "Enter Monster type: ";
    std::cin >> input;

    MonsterType a {getMonsterFromString(input)};
    std::cout << "MonsterType: " << getMonsterName(a) << '\n';

    return 0;
}
