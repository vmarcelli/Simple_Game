#ifndef NPC_TABLE_H
#define NPC_TABLE_H
#include "Character.h"
#include <iostream>

using std::string;

class NPC_Table {
    private:
        static const int TABLE_SIZE = 5;
        Character table[TABLE_SIZE];
        void createTable();
    
    public:
		NPC_Table();
		Character getNPC(int index);
};
#endif