#pragma once
#include <string>
#include "Projectiles.h"
#include "Magic.h"

using namespace std;

class weapon {
protected:
    string name_w;
    unsigned int final_damage, weight_w;
};

class sword : public weapon {
private:
    unsigned int atack_speed;
public:
    sword() {
        name_w = "Sword";
        final_damage = 10;
        weight_w = 4;
        atack_speed = 33;
    }
};

class knife :public weapon {
private:
    unsigned int atack_speed;
public:
    knife() {
        name_w = "knife";
        final_damage = 13;
        weight_w = 1;
        atack_speed = 87;
    }
};

class bow : public weapon, public arrow {
private:
    unsigned int atack_speed;
public:
    bow() {
        name_w = "Bow";
        final_damage = 45 + extra_damage;
        weight_w = 2;
        atack_speed = 19;
    }
};


class forgotten_magic_staff : public weapon, public forgotten_magic {
private:
    int energy_restoration;
    unsigned int atack_speed;
public:
    forgotten_magic_staff() {
        name_w = "Magic Staff of forgotten";
        weight_w = 6;
        energy_restoration = 17;
        atack_speed = 18;
    }
};

class blood_magic_staff : public weapon, public blood_magic {
private:
    int energy_restoration;
    unsigned int atack_speed;
public:
    blood_magic_staff() {
        name_w = "Magic Staff of blood";
        weight_w = 4;
        energy_restoration = 17;
        atack_speed = 34;
    }
};

class water_magic_staff : public weapon, public water_magic {
private:
    int energy_restoration;
    unsigned int atack_speed;
public:
    water_magic_staff() {
        name_w = "Magic Staff of water";
        weight_w = 5;
        energy_restoration = 12;
        atack_speed = 22;
    }
};

class axe : public weapon {
private:
    unsigned int atack_speed;
public:
    axe() {
        name_w = "axe";
        final_damage = 20;
        weight_w = 8;
        atack_speed = 66;
    }
};