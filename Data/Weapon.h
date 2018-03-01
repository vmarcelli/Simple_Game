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
        /* Functions */
        /*
        Constructor for the Weapon class.
        To create a weapon requires a name, type, min and max
        damaga. The decription for the weapon is not required on
        creation.
        */
        Weapon(string name, bool type, int min, int max);
        
        /*
        Default constructor
        */
        Weapon();

        /*
        Alternative setter for Weapons created later on, or in array
        */
        void wepSetter(string name, bool type, int min, int max);
        /*
        Returns the weapon name
        */
        string getName();

        /*
        Returns weapon's min damage
        */
        int getMin();

        /*
        Returns weapon's max damage
        */
        int getMax();

        /*
        Returns the weapon's description
        */
        string getDescrip();

        /*
        Returns the weapon's damage type
        */
        bool getWepType();
        
        /*
        Sets the weapon's description,
        Should be done after the weapon is created
        */
        void setDescrip(string descrip);

};
#endif