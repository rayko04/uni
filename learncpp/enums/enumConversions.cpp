#include <iostream>
#include <string_view>

namespace Monsters
{
    enum MonsterType
    {
        goblin,         //(goblin has value 0)
        orc,
        troll,
        ogre,
        skeleton,
    };

    constexpr std::string_view getMonsterName(const Monsters::MonsterType& a)
    {
        switch (a)
        {
            case goblin: return "goblin";       //can use 0, 1, 2 too
            case orc: return "orc";
            case troll: return "troll";
            case ogre: return "ogre";
            case skeleton: return "skeleton";
            default: return "???";
        }
    }
}

int main()
{
    //Monsters::MonsterType b {2}; //implicit coversion(int to enum) does not work
    //Monsters::MonsterType b {static_cast<Monsters::MonsterType>(2)};    //static cast works when int to enum

    //enum to string
    constexpr Monsters::MonsterType a {Monsters::goblin};

    std::cout << "Monster is: " << a << '\n';   //implicit conversion from enum to int as << is not overloaded for MonsterType type
    std::cout << "Monster is: " << Monsters::getMonsterName(a) << '\n';
    return 0;
}
