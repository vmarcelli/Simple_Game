/*
A class for weapons used in the game, holds the dmg that they
do as well as what dmgType, their description, their name
and their damage range (min-max).
*/

#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <iostream>

using std::string;

class Weapon{
    private:
        /* Class Fields */
        bool intDmg;    //False = Physical Dmg, True = Magic Dmg
        string wepName; //Weapon Name
        int minDMG;     //Min damage 
        int maxDMG;     //Max damage
        string wepDescrip;  //Description for weapon

    public:
        /*
        Constructor for the Weapon class.
        To create a weapon requires a name, type, min and max
        damaga. The decription for the weapon is not required on
        creation.
        */
        Weapon(string name, bool type, int min, int max);
        string getName();
        int getMin();
        int getMax();
        string getDescrip();
        bool getWepType();

};
#endif