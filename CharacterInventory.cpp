#include "CharacterInventory.hpp"
#include "character.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int CharacterInventory::getCapacity(){
    return this -> characterCapacity;
}

int CharacterInventory::getCurrNum(){
    return this-> currCharNum;
}

void CharacterInventory::addToCharInventory(Character x){
    if(this->characterMainList.size() < this->characterCapacity - 1){
        this->characterMainList.push_back(x);
    }
}

vector<int> CharacterInventory::getCharacterList(){
    vector<int> charIndexes;
    for(i=0; i < this->characterMainList.size()-1; i++){
        charIndexes.push_back(i);
        i++;
    }
}

vector<int> CharacterInventory::filterRarity(int rarity){
    vector<int> rarityVec;
    for(int i = 0; i <  this->characterMainList.size()-1; i++){
        if(this->characterMainList.at(i).getRarity() == rarity){
            rarityVec.push_back(i);
        }
        i++;
    }
}

vector<int> CharacterInventory::filterType(string type){
    vector<int> typeyVec;
    for(int i = 0; i <  this->characterMainList.size()-1; i++){
        if(this->characterMainList.at(i).getType() == type){
            typeVec.push_back(i);
        }
        i++;
    }
}

Character CharacterInventory::accessCharacter(int index){
    return this->characterMainList.at(index);
}

