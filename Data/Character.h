/*
    Used to create and get data from NPCs
*/
#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream> 
#include <string>
#include "Stats.h"
#include "Weapon.h"
#include "Armor.h"

using std::string; 

/*
Characters MUST have a name and stats when created.
They may hold Armor or a Weapon, but their existence
is not dependent upon that.
*/
class Character {
    private:
        /* Class fields */
        string charName;    //Character name
        Stats charStats;    //Character stats
        Weapon charWeapon;  //Character Weapon
        Armor charArmr;     //Character Armor
        string charDescrip; //Character description

    public:

        /* Class functions */
        /*
        Character constructor
        */
        Character(string name, int atts[7]);
        void setWeapon(Weapon wep);
        void setArmor(Armor arm);
        string getNPCName();
        int getSTR();
        int getPER();
        int getEND();
        int getCHA();
        int getINT();
        int getAGI();
        int getLCK();
        string getDescrip();
};
#endif