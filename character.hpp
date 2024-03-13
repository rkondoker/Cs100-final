#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <cmath>

using namespace std;

class Character{
    private:
        string type;
        int rarity;
        string battleType;
        int level;
        int health;
        int attack;
        int defense;
        string skill;

    public:
        Character(string type, int rarity, string battleType, string skill);
        string getType();
        int getRarity();
        string getBattleType();
        int getLevel();
        int getHealth();
        int getAttack();
        int getDefense();

};

#endif 