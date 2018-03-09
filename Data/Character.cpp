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
    charStats.setAll(atts[0], atts[1], atts[2]
                        atts[3], atts[4],
                        atts[5], atts[6]);
}