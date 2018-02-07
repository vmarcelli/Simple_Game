/*
The stats class is just a glorified hash table, it contains SPECIAL stats
 Str. Per. End. Cha. Int. Agi. Lck.
 which are barely ever changed unless a special event does so
*/

#pragma once
#ifndef STATS_H
#define STATS_H
#include <string>
#include <iostream>

class Stats {
	public:
		//Constructor
		Stats();
		//Changes stat to specific values, calls private helper function
		void changeStat(int stat, int value);
		
		//returns stat value
		int getStat(int stat);
		
		//TODO:
		//returns full stat table
		int* getAllStats();
		
		//incrementer and decrementer
		void decrementStat(int stat);
		void incrementStat(int stat);
		void incrementBy(int stat, int value);
		void decrementBy(int stat, int value);
		
	private:
		/*
		Str = 0
		Per = 1
		End = 2
		Cha = 3
		Int = 4
		Agi = 5
		Lck = 6
		*/
		static int stats[7];
		
		//setters for stats
		void setSTR(int val);
		void setPER(int val);
		void setEND(int val);
		void setCHA(int val);
		void setINT(int val);
		void setAGI(int val);
		void setLCK(int val);
};
#endif