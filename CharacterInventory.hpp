#ifndef CHARACTERINVENTORY_HPP
#define CHARACTERINVENTORY_HPP

#include <iostream>
#include "character.hpp"
#include <vector>

using namespace std;

class CharacterInventory {
    private: 
        vector<Character> characterMainList;
        int characterCapacity;
        int currCharNum;

    public:
        int getCapacity();
        int getCurrNum();
        void addToCharInventory(Character x);
        //void addCapacity(Currency* coins);
        vector<int> getCharacterList();
        vector<int> sortByTypeRarity();
        vector<int> sortByHealth();
        vector<int> sortByAttack();
        vector<int> sortByDefense();
        vector<int> filterType(string type);
        vector<int> filterRarity(int rarity);
        Character accessCharacter(int index);
        
};

#endif