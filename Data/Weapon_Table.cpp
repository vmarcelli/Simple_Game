#include "Weapon_Table.h"
#include "Weapon.h"
#include <string>
#include <iostream>

using std::string;

const int TABLE_SIZE = 7;
Weapon table[TABLE_SIZE];
int ree[5];

Weapon_Table::Weapon_Table() {
    createTable();
}

void Weapon_Table::createTable() {
    //table.wepSetter("Stick", 0, 1, 3);
    table[0] = ("Stick", 0, 1, 3);
    ree[0] = 15;
}