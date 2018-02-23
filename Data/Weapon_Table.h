/*
Table that holds the different weapons in the game
*/
#include "Weapon.h"
#include <iostream>
#include <string>

using std::string;

class Weapon_Table {
    private:
        Weapon table[];
    public:
        Weapon_Table();
        Weapon getWeapon(int index);
        /*
        Build table -> send weapon from index
        */
}

