/*
    Used to create and get data from NPCs
*/
#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream> 
#include <string>
#include "Stats.h"

using std::string; 

class Character {
    private:
        string charName;
        Stats charStats;
        string charDescrip;

    public:
        Character(string name, int atts[7]);
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