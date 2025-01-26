#include <iostream>

namespace Monsters
{
    enum MonsterType
    {
        goblin,
        orc,
        troll,
        ogre,
        skeleton,
    };
}

int main()
{
    start:

    std::cout << "Enter Monster Type: ";
    std::string type;
    std::cin >> type;

    Monsters::MonsterType a;
    
    if(type == "goblin")
        a = Monsters::goblin;
    else if(type == "orc")
        a = Monsters::orc;
    else if(type == "troll")
        a = Monsters::troll;
    else if(type == "ogre")
        a = Monsters::ogre;
    else if(type == "skeleton")
        a = Monsters::skeleton;
    else 
        goto start;


    return 0;
}
