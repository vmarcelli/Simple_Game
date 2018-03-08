#include "Weapon_Table.h"
#include "Weapon.h"
#include <string>
#include <iostream>

using std::string;

//Weapon table, must be changed in .h file if 
//Weapons are added or removed from the game
Weapon table[5];

//Constructor build the table
Weapon_Table::Weapon_Table() {
    createTable();
}

/*
Creates table of Weapons for game
*/
void Weapon_Table::createTable() {
    //0 - Stick
    table[0].wepSetter("Stick", 0, 1, 1);
    table[0].setDescrip("A useless stick");
    //1 - Short Sword
    table[1].wepSetter("Short-Sword", 0, 3, 5);
    table[1].setDescrip("A short sword with a kind of sharp edge");
    //2 - Long Sword
    table[2].wepSetter("Long-Sword", 0, 4, 6);
    table[2].setDescrip("A long bladed sword");
    //3 - Heros Sword
    table[3].wepSetter("Hero's Sword", 0, 7, 10);
    table[3].setDescrip("A sword said to have been weilded by heroes of old");
    //4 - Magic Dagger
    table[4].wepSetter("Magic Dagger", 1, 5, 14);
    table[4].setDescrip("A magical blade with varied magical damage");

}

/*
Returns the requested weapon
*/
Weapon Weapon_Table::getWeapon(int index) {
    return table[index];
}