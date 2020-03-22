
#ifndef pokemon_h
#define pokemon_h

#include <string>
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
    Pokemon(string name, int hp, int attack, int defense, int speed, int special) {};

    ~Pokemon(){};
    string toString() {};

    void level_up () {};
    void evolve () {};
    void take_damage() {};
    bool catch_pokemon() {};



    void set_name (string name) {};
    void set_surname (string surname) {};
    void set_hp (int hp) {};
    void set_attack (int attack) {};
    void set_defense (int defense) {};
    void set_speed (int speed) {};
    void set_special (int special) {};
    void set_level (int level) {};
    void set_is_ko (bool is_ko) {};

    string get_surname() {};
    string get_name() {};
    int get_hp () {};
    int get_attack () {};
    int get_defense () {};
    int get_speed () {};
    int get_special () {};
    bool get_is_ko () {};
};
#endif // !