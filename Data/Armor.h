
#ifndef ARMOR_H
#define ARMOR_H
#include <string>

using std::string;

class Armor {
    private:
        int rating;
        string armDesc;
        string name;

    public:
        Armor(int armR, string armName);
        int getRating();
        string getName();
        string getDescrip();
};
#endif
