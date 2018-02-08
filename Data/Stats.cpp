/*
The stats class is just a glorified hash table, it contains SPECIAL stats
 Str. Per. End. Cha. Int. Agi. Lck.
 which are barely ever changed unless a special event does so
*/

#include <iostream>
#include "Stats.h"

using namespace std;


/*
Str = 0
Per = 1
End = 2
Cha = 3
Int = 4
Agi = 5
Lck = 6
*/
static int stats[];

Stats::Stats() {
	stats[7] = {};
};

/*
public setter for base stats, calls helper functions
*/
void Stats::changeStat(int stat, int value) {
	switch(stat) {
		case 0:
			setSTR(value);
			break;
		case 1:
			setPER(value);
			break;
		case 2:
			setEND(value);
			break;
		case 3:
			setCHA(value);
			break;
		case 4:
			setINT(value);
			break;
		case 5:
			setAGI(value);
			break;
		case 6:
			setLCK(value);
			break;
		default:
			//do something
	}
}

//Returns stat value
int Stats::getStat(int stat) {
	return stats[stat];
}

int* getAllStats() {
	return stats;
}

//decrements a stat by 1
void Stats::decrementStat(int stat) {
	stats[stat] -= 1;
}

//increments a stat by 1
void Stats::incrementStat(int stat) {
	stats[stat] += 1;
}

//Increment by x value
void Stats::incrementBy(int stat, int value) {
	stats[stat] += value;
}

void Stats::decrementBy(int stat, int value) {
	stats[stat] -= value;
}
//Strength setter
 void Stats::setSTR(int value) {
	stats[0] = value;
}

//Perception setter
void Stats::setPER(int value) {
	stats[1] = value;
}

//Endurance setter
void Stats::setEND(int value) {
	stats[2] = value;
}

//Charisma setter
void Stats::setCHA(int value) {
	stats[3] = value;
}

//Intelligence setter
void Stats::setINT(int value) {
	stats[4] = value;
}

//Agility setter
void Stats::setAGI(int value) {
	stats[5] = value;
}

//Luck setter
void Stats::setLCK(int value) {
	stats[6] = value;
}