#include <iostream>
#include <typeinfo>

enum class MonsterType      // or use enum and define inside struct
{
    ogre,
    dragon,
    orc,
    giantSpider,
    slime,
};

struct Monster
{
    MonsterType type {};
    std::string name {};
    int health {};
};

std::string getMonsterType(const Monster& monster)
{
    using enum MonsterType;
    switch (monster.type)
    {
        case ogre: return "ogre";
        case dragon: return "dragon";
        case orc: return "orc";
        case giantSpider: return "giant-spider";
        case slime: return "slime";
        default: return "???";
    }
}

void printMonster(const Monster& monster)
{
    std::cout << "This " << getMonsterType(monster) << " is named " << monster.name << " and has " << monster.health << " health." << '\n';
}

int main()
{
    Monster o{MonsterType::ogre, "Torg", 145};
    Monster s{MonsterType::slime, "Blurp", 23};

    printMonster(o);
    std::cout << std::endl;
    printMonster(s);

    return 0;
}
