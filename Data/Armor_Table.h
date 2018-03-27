/*
Table that holds the different weapons in the game
*/
#ifndef ARMOR_TABLE_H
#define ARMOR_TABLE_H
#include "Armor.h"
#include <iostream>
#include <string>

using std::string;

class Armor_Table {
    private:
        static const int TABLE_SIZE = 5;
        Armor table[TABLE_SIZE];
        void createTable();
    public:
        Armor_Table();
        /*
        Build table -> send weapon from index
        */
        Armor getArmor(int index);
        
};
#endif