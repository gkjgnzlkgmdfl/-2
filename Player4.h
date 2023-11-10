#pragma once
#include <string>
#include "Weapons.h"
#include "Enemy.h"

using namespace std;

class player {
public:
    unsigned int id;
    int health;
    string player_name, weapon_name;
};

class warrior : public player, public axe{
public:
    warrior(unsigned int id, string name, int health) {
        weapon_name = name_w;
        this->id = id;
        player_name = name;
        this->health = health;
    }
    void Warior_attack_s(skeleton& d) { 
        d.health_e -= final_damage;
    }
    void Warior_attack_z(zombie& d) {
        d.health_e -= final_damage;
    }
    void Warrior_get_info() {
        cout << "id: " << id << "; Name: " << player_name << "; Health: " << health << "; Damage: " << final_damage << "; Weapon name: " << name_w << endl;
    }
};

class swordsman : public player, public sword{
public:
    swordsman(unsigned int id, string name, int health) {
        weapon_name = name_w;
        this->id = id;
        player_name = name;
        this->health = health;
    }
    void swordsman_attack_s(skeleton& d) {
        d.health_e -= final_damage;
    }
    void swordsman_attack_z(zombie& d) {
        d.health_e -= final_damage;
    }
    void swordsman_get_info() {
        cout << "id: " << id << "; Name: " << player_name << "; Health: " << health << "; Damage: " << final_damage << "; Weapon name: " << name_w << endl;
    }
};

class robber : public player, public knife{
public:
    robber(unsigned int id, string name, int health) {
        weapon_name = name_w;
        this->id = id;
        player_name = name;
        this->health = health;
    }
    void robber_attack_s(skeleton& d) {
        d.health_e -= final_damage;
    }
    void robber_attack_z(zombie& d) {
        d.health_e -= final_damage;
    }
    void robber_get_info() {
        cout << "id: " << id << "; Name: " << player_name << "; Health: " << health << "; Damage: " << final_damage << "; Weapon name: " << name_w << endl;
    }
};

class archer : public player, public bow { 
public:
    archer(unsigned int id, string name, int health) {
        weapon_name = name_w;
        this->id = id;
        player_name = name;
        this->health = health;
    }
    void archer_attack_s(skeleton& d) {
        d.health_e -= final_damage;
    }
    void archer_attack_z(zombie& d) {
        d.health_e -= final_damage;
    }
    void archer_get_info() {
        cout << "id: " << id << "; Name: " << player_name << "; Health: " << health << "; Damage: " << final_damage << "; Weapon name: " << name_w << endl;
    }
};

class blood_mage : public player, public blood_magic_staff {
public:
    blood_mage(unsigned int id, string name, int health) {
        weapon_name = name_w;
        this->id = id;
        player_name = name;
        this->health = health;
    }
    void lvl_up(int new_lvl) {
        lvl = new_lvl;
        if (lvl == 0) {
            extra_damage = -1;
        }
        else if (lvl == 1) {
            extra_damage = 14;
        }
        else if (lvl == 2) {
            extra_damage = 27;
        }
        else if (lvl == 3) {
            extra_damage = 35;
        }
        if (lvl == 0) final_damage = 0;
        else final_damage = 11 + extra_damage;
    }
    void Blood_mage_attack_s(skeleton& d) {
        d.health_e -= final_damage;
    }
    void Blood_mage_attack_z(zombie& d) {
        d.health_e -= final_damage;
    }
    void Blood_mage_get_info() {
        cout << "id: " << id << "; Name: " << player_name << "; Health: " << health << "; Damage: " << final_damage << "; Weapon name: " << name_w << "; Magic lvl: " << lvl << endl;
    }
};

class forgotten_mage: public player, public forgotten_magic_staff {
public:
    forgotten_mage(unsigned int id, string name, int health) {
        weapon_name = name_w;
        this->id = id;
        player_name = name;
        this->health = health;
    }
    void lvl_up(int new_lvl) {
        lvl = new_lvl;

        if (lvl == 0) {
            extra_damage = 1;
            shield_capacity = -3;
        }
        else if (lvl == 1) {
            extra_damage = 7;
            shield_capacity = 52;
        }
        else if (lvl == 2) {
            extra_damage = 20;
            shield_capacity = 50;
        }
        else if (lvl == 3) {
            extra_damage = 18;
            shield_capacity = 84;

        if (lvl == 0) final_damage = 1;
        else final_damage = 13 + extra_damage;
        }
    }
    void forgotten_mage_attack_s(skeleton& d) {
        d.health_e -= final_damage;
    }
    void forgotten_mage_attack_z(zombie& d) {
        d.health_e -= final_damage;
    }
    void forgotten_mage_get_info() {
        cout << "id: " << id << "; Name: " << player_name << "; Health: " << health << "; Damage: " << final_damage << "; Weapon name: " << name_w << "; Magic lvl: " << lvl << endl;
    }
};

class water_mage : public player, public water_magic_staff {
public:
    water_mage(unsigned int id, string name, int health) {
        weapon_name = name_w;
        this->id = id;
        player_name = name;
        this->health = health;
    }
    void lvl_up(int new_lvl) {
        lvl = new_lvl;

        if (lvl == 0) {
            extra_damage = 0;
            lump_duration = 0.0f;
        }
        else if (lvl == 1) {
            extra_damage = 23;
            lump_duration = 4.0f;
        }
        else if (lvl == 2) {
            extra_damage = 27;
            lump_duration = 5.2f;
        }
        else if (lvl == 3) {
            extra_damage = 40;
            lump_duration = 3.0f;
        }

        if (lvl == 0) final_damage = 0;
        else final_damage = 17 + extra_damage;
    }
    void water_magic_attack_s(skeleton& d) {
        d.health_e -= final_damage;
    }
    void water_magic_attack_z(zombie& d) {
        d.health_e -= final_damage;
    }
    void water_magic_get_info() {
        cout << "id: " << id << "; Name: " << player_name << "; Health: " << health << "; Damage: " << final_damage << "; Weapon name: " << name_w << "; Magic lvl: " << lvl << endl;
    }
};