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

Character::Character() {
	charName = "";
	charStats.setAll(0, 0, 0, 0, 0, 0, 0);
}

void Character::setNameStats(string name, int* atts) {
    charName = name;
    charStats.setAll(atts[0], atts[1], atts[2],
                        atts[3], atts[4],
                        atts[5], atts[6]);
}

void Character::setWeapon(Weapon wep) {
    charWeapon = wep;
}

void Character::setArmor(Armor arm) {
    charArmr = arm;
}

string Character::getNPCName() {
    return charName;
}

int Character::getSTR() {
    return charStats.getStat(0);
}

int Character::getPER() {
    return charStats.getStat(1);
}

int Character::getEND() {
    return charStats.getStat(2);
}

int Character::getCHA() {
    return charStats.getStat(3);
}

int Character::getINT() {
    return charStats.getStat(4);
}

int Character::getAGI() {
    return charStats.getStat(5);
}

int Character::getLCK() {
    return charStats.getStat(6);
}

void Character::setDescrip(string descrip) {
    charDescrip = descrip;
}
string getDescrip() {
    return charDescrip;
}