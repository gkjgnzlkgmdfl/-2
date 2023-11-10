#pragma once
#include <string>

using namespace std;

class magic {
protected:
    string name_m, special_ability, energy_type;
    unsigned int extra_damage;
};

class blood_magic : public magic {
protected:
    unsigned short lvl = 0;
public:
    blood_magic() {
        name_m = "rage";
        special_ability = "sanguimancy";
        energy_type = "rage of the fallen";
    }
};

class forgotten_magic : public magic {
protected:
    unsigned short shield_capacity;
    unsigned short lvl = 0;
public:
    forgotten_magic() {
        name_m = "Forgotten";
        special_ability = "Mana Shield";
        energy_type = "Mana";
    }

};

class water_magic : public magic {
protected:
    float lump_duration;
    unsigned short lvl = 0;
public:
    water_magic() {
        name_m = "wateres";
        special_ability = "water ball";
        energy_type = "Water";
    }

};
