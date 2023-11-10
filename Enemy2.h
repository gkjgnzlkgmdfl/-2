#pragma once
#include <string>
#include "Weapons.h"

using namespace std;

class enemy {
public:
    string enemy_type, weapon_name_e, kind;
    int health_e, drop_money_count;
    unsigned int final_damage_e;

};


class skeleton : public sword,public enemy{ 
public:
    skeleton() {
        enemy_type = "skeleton";
        weapon_name_e = name_w;
        health_e = 125;
        drop_money_count = 50;
    }

};

class zombie : public bow, public enemy{ 
public:
    zombie() {
        enemy_type = "zombie";
        weapon_name_e = name_w;
        health_e = 1500;
        drop_money_count =250;
    }

};
