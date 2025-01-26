#include <iostream>

enum MonsterType
{
    invalid,
    goblin,
    troll,
};

constexpr std::string_view getMonsterName(MonsterType a)
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

std::ostream& operator<<(std::ostream& out, MonsterType a)
{
    out << getMonsterName(a) << '\n';

    return out;
}

std::istream& operator >>(std::istream& in, MonsterType& a)
{
    std::string input;
    std::cin >> input;

    a = getMonsterFromString(input);
    return in;
}

int main()
{
    std::cout << "Enter Monster type: ";
    MonsterType monster {}; //initialed with 0(invalid)
    std::cin >> monster;

    std::cout << "MonsterType: " << monster << '\n';

    return 0;
}
