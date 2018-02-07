#include "Weapon.h"
#include <iostream>

/*
Variable and function descriptions can be found in the
Weapon.h file
*/
using std::string;
string wepName;
bool intDMG;
int minDMG;
int maxDMG; 

Weapon::Weapon(string wName, bool type, int min, int max) {
    wepName = wName;
    minDMG = min;
    maxDMG = max;
    intDMG = type;
}

string Weapon::getName() {
    return wepName;
}

int Weapon::getMax() {
    return maxDMG;
}

int Weapon::getMin() {
    return minDMG;
}

string Weapon::getDescrip() {
    return wepDescrip;
}

bool Weapon::getWepType() {
    return intDMG;
}

void Weapon::setDescrip(string descrip) {
    wepDescrip = descrip;
}