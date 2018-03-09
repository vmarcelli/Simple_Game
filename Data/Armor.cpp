#include <string>
#include "Armor.h"

using std::string;

int rating;
string armDesc;
string name;

Armor::Armor(int armR, string armName) {
    rating = armR;
    name = armName;
}

Armor::Armor() {
    rating = 0;
    name = "";
}

void Armor::armSetter(int armR, string armName) {
    rating = armR;
    name = armName;
}
int Armor::getRating() {
    return rating;
}

string Armor::getName() {
    return name;
}

string Armor::getDescrip() {
    return armDesc;
}