/*
Table that holds the different weapons in the game
*/
#include "Armor.h"
#include "Armor_Table.h"
#include <iostream>
#include <string>

using std::string;

static const int TABLE_SIZE = 5;
Armor table[TABLE_SIZE];

Armor_Table::Armor_Table() {
    createTable();
}

void Armor_Table::createTable() {
    table[0].armSetter(1, "Dirty Clothes");
    table[1].armSetter(3, "Tin Armor");
    table[2].armSetter(4, "Actual Armor");
    table[3].armSetter(6, "Hero's Armor");
    table[4].armSetter(8, "Magic Armor");
}

Armor Armor_Table::getArmor(int index) {
	return table[index];
}