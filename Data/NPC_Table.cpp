#include "NPC_Table.h"
#include "Weapon_Table.h"
#include "Armor_Table.h"
#include <iostream>
#include <string>

using std::string;

const int TABLE_SIZE = 5;
Character table[TABLE_SIZE];
Armor_Table Arms;
Weapon_Table Weps;

NPC_Table::NPC_Table() {
	createTable();
}

void NPC_Table::createTable() {
	//Goblin
	int gobo[7] = { 3, 2, 2, 2, 2, 2, 2 };
	table[0].setNameStats("Goblin", gobo);
	table[0].setWeapon(Weps.getWeapon(0));
	table[0].setArmor(Arms.getArmor(0));
}

Character NPC_Table::getNPC(int index) {
	return table[index];
}