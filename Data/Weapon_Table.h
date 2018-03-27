/*
Table that holds the different weapons in the game
*/
#ifndef WEAPON_TABLE_H
#define WEAPON_TABLE_H
#include "Weapon.h"
#include <iostream>
#include <string>

using std::string;

class Weapon_Table {
    private:
        static const int TABLE_SIZE = 5;
        Weapon table[TABLE_SIZE];
        void createTable();
    public:
        Weapon_Table();
        /*
        Build table -> send weapon from index
        */
        Weapon getWeapon(int index);
        
};
#endif

