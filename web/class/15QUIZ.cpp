#include <iostream>
#include "Random.h"

class Monster
{
public:
    enum Type
    {
        dragon,
        goblin,
        ogre,
        orc,
        skeleton,
        troll,
        vampire,
        zombie,
        maxMonsterTypes,
    };

private:
    Type m_type{};
    std::string m_name{"???"};
    std::string m_roar{"???"};
    int m_hits{};

public:
    Monster(Type type, std::string_view name, std::string_view roar, int hits)
        : m_type{type}, m_name{name}, m_roar{roar}, m_hits{hits}
    {
    }

    std::string_view getTypeString();
    void print();
};

std::string_view Monster::getTypeString()
{
    switch (m_type)
    {
    case dragon:
        return "dragon";
    case goblin:
        return "goblon";
    case ogre:
        return "ogre";
    case orc:
        return "orc";
    case skeleton:
        return "skeleton";
    case troll:
        return "troll";
    case vampire:
        return "vampire";
    case zombie:
        return "zombie";
    default:
        return "???";
    }
}

void Monster::print()
{
    if (m_hits > 0)
        std::cout << m_name << " the " << getTypeString() << " has " << m_hits << " points and says " << m_roar << std::endl;
    else
        std::cout << m_name << " the " << getTypeString() << " is dead" << std::endl;
}

namespace MonsterGenerator
{

    std::string_view getName(int num)
    {
        switch (num)
        {
        case 0:
            return "Blarg";
        case 1:
            return "Clarg";
        case 2:
            return "Dlarg";
        case 3:
            return "Elarg";
        case 4:
            return "Flarg";
        case 5:
            return "Boooo";
        default:
            return "????";
        }
    }

    std::string_view getRoar(int num)
    {
        switch (num)
        {
        case 0:
            return "Meow";
        case 1:
            return "Hiss";
        case 2:
            return "Zsss";
        case 3:
            return "Weee";
        case 4:
            return "Rizz";
        case 5:
            return "Snogd";
        default:
            return "????";
        }
    }

    Monster generate()
    {
        return Monster{
            static_cast<Monster::Type>(Random::get(0, Monster::maxMonsterTypes - 1)),
            getName(Random::get(0, 5)),
            getRoar(Random::get(0, 5)),
            Random::get(1, 100)};
    }
}

int main()
{
    Monster m{MonsterGenerator::generate()};
    m.print();

    return 0;
}
