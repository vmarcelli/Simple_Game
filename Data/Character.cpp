#include "Character.h"
#include "Stats.h"
#include "Armor_Table.h"
#include "Weapon_Table.h"
#include <iostream>

using std::string;

string charName;
Stats charStats;
Weapon charWeapon;
Armor charArmr;
string charDescrip;

Character::Character(string name, int atts[7]) {
    charName = name;
    charStats = atts;
}