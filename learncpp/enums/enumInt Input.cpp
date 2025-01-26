#include <iostream>

enum MonsterType
{
    //inavlid,
    goblin,
    troll,
};

constexpr std::string_view getMonsterName(MonsterType a)
{
    switch (a)
    {
        //case invalid: return "no";
        case goblin: return "goblin";
        case troll: return "troll";
        default: return "???";
    }
}

int main()
{
    int input;
    std::cout << "Enter Monster type(0=goblin, 1=troll): ";
    std::cin >> input;

    if(input <0 || input >1)
        std::cout << "invalid input" << "\n";
    else
    {
        MonsterType a {static_cast<MonsterType>(input)};
        std::cout << "Monster type is: " << getMonsterName(a) << '\n';
    }

    return 0;
}
