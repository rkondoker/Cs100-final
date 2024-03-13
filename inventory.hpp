#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include <iostream>
#include "character.hpp"
#include <vector>

using namespace std;


class inventory {
    private:
        vector<Character> characterInv;
        //vector<equipment> equipmentInv;
        int characterCapacity;
        int currCharNum;

    public:
        int getCapacity();
        int getCurrNum();
        void addToCharInventory(Character x);
        //void addCapacity(Currency* coins);
        void displayCharacterList();
        vector<int> sortByTypeRarityBattle();
        vector<Character> sortByLevel();
        vector<int> sortByHealth();
        vector<int> sortByAttack();
        vector<int> sortByDefense();
        vector<int> filterType(string type);
        vector<int> filterRarity(int rarity);
        vector<int> filterBattleType(string type);
        void displayList(vector<int> list);
        Character accessCharacter(int index);
        
};

#endif 
