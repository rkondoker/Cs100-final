#include "inventory.h"
#include "character.h"
#include <iostream>
#include <vector>

using namespace std;


int inventory::getCapacity(){
    return this->characterCapacity;
}

int inventory::getCurrNum(){
    return this->currCharNum;
}

void inventory::addToCharInventory(Character x){
    this-> characterInv.push_back(x);
}


//void inventory::addCapacity(Currency* coins){
    
//}

void inventory::displayCharacterList(){
    for(int i = 0; i < this->characterInv.size()-1; i++){
        cout << "Character " << i << ":" << endl;
        cout << "Type: " << this->characterInv.at(i).getType() << endl;
        cout << "Rarity:" << this->characterInv.at(i).getRarity() << endl;
        cout << "Level: " << this->characterInv.at(i).getLevele() << endl;
        cout << "Health: "this->characterInv.at(i).getType() << endl;
        i++;
    }
}

vector<Character> inventory::sortByLevel(){
    vector<Character> copyVect(this->characterInv);
    sort(copVect.begin(), copyVect.end(), [](const Character& lhs, const Character& rhs) {
      return lhs.getLevel < rhs.getLevel;
   });
}