#include <string>
#include <iostream>
#include "Player.h"
#include "Projectiles.h"
#include "Enemy.h"
#include "Magic.h"
#include "Weapons.h"

using namespace std;

class entity {
protected:
    string name_e, type_e;
    bool is_alive;
public:
    entity(string name, string type, bool is_alive) {
        name_e = name;
        type_e = type;
        this->is_alive = is_alive;
    }
    friend void Cut_tree(player&, entity&);
    friend void Earning_coin(player&, entity&);

};

class quest {
protected:
    unsigned short number;
    string name, description;
public:
    quest(unsigned short number, string name, string description) {
        this->number = number;
        this->name = name;
        this->description = description;
    }

    void Quest_get_info() {
        cout << "Name = " << name << "; Number = " << number << endl << "Description: " << description << endl;
    }
};

void Cut_tree(player& d, entity& x) {
    if (x.type_e == "Tree") {
        cout << d.player_name << " is cutting " << x.name_e << endl;
    }
}

void Earning_coin(player& d, entity& x) {
    if (x.type_e == "Coin") {
        cout << d.player_name << " earned " << x.name_e << endl;
    }
}


int main()
{
    // дальше взаимодействия классов

    quest FirstQuest = quest(1, "Begining", "You need to kill zombi and skeleton");
    FirstQuest.Quest_get_info();

    warrior nomad = warrior(212, "nomad", 220);
    skeleton pucher;
    nomad.Warrior_get_info();

    archer tuzic = archer(192102, "tuzic", 310);
    tuzic.archer_get_info();

    nomad.Warior_attack_s(pucher);
    cout << pucher.health_e << endl;

    blood_mage das = blood_mage(432, "pahan", 220);
    das.lvl_up(2);
    das.Blood_mage_attack_s(pucher);
    cout << pucher.health_e << endl;
    das.Blood_mage_get_info();

    entity Tree = entity("Grand Tree", "Tree", true);
    entity Money = entity("coin", "Coin", false);
    Cut_tree(das, Tree);
    Earning_coin(das, Money);

    
    return 1;
}
