#include <iostream>
#include <Pokemon.h>

using namespace std;

class Pokemon {
    public:
    string name;
    string surname;
    int hp;
    int attack;
    int defense;
    int speed;
    int special;
    int level;
    bool is_ko;

    Pokemon(){};
    
    Pokemon(string name, int hp, int attack, int defense, int speed, int special) {
        this.name       = name;
        this.hp         = hp;
        this.attack     = attack;
        this.defense    = defense;
        this.speed      = speed;
        this.special    = special;
        this.level      = 5;
        this.is_ko      = false;
    };

    ~Pokemon(){};

    string toString() {
        return name+"\n hp: "+to_string(hp)+"\n attack: "+to_string(attack)+"\n defense: "+to_string(defense)+"\n speed: "+to_strng(speed)+"\n special:"+to_string(special);
    };

    void level_up () {
        this.level ++;
    };

    void evolve () {};

    void take_damage(int damage) {
        this.hp -= damage;
    };

    bool catch_pokemon() {
        int caught_rate = rand() % 10 + 1;

        if (caught_rate > 5)
            return true;
        else 
            return false;
    };



    void set_name (string name) {
        this.name = name;
    };
    void set_surname (string surname) {
        this.surname = surname;
    };
    void set_hp (int hp) {
        this.hp = hp;
    };
    void set_attack (int attack) {
        this.attack = attack;
    };
    void set_defense (int defense) {
        this.defense = defense;
    };
    void set_speed (int speed) {
        this.speed = speed;
    };
    void set_special (int special) {
        this.special = special;
    };
    void set_level (int level) {
        this.level = level;
    };
    void set_is_ko (bool is_ko) {
        this.is_ko = is_ko;
    };


    string get_name() {
        return this.name;
    };
    string get_surname() {
        return this.surname;
    };
    int get_hp () {
        return this.hp;
    };
    int get_attack () {
        return this.attack;
    };
    int get_defense () {
        return this.defense;
    };
    int get_speed () {
        return this.defense;
    };
    int get_special () {
        return this.special;
    };
    bool get_is_ko () {
        return this.is_ko;
    };
};