#include <iostream>
#include "Pokemon.h"
using namespace std;

void initiate_pokemons (Pokemon *all_pokemons) {
	Pokemon *bulbasaur 	= new Pokemon("Bulbasaur", 45,49,49,45,65);
	Pokemon *charmander = new Pokemon("Charmander", 39,52,43,65,50);
	Pokemon *squirtle 	= new Pokemon("Squirtle", 44,48,65,43,50);

	*all_pokemons = *bulbasaur;
	all_pokemons++;
	*all_pokemons = *charmander;
	all_pokemons++;
	*all_pokemons = *squirtle;
}

void starter(Pokemon *lineup, Pokemon *all_pokemons) {
	bool chosen = false;
	string answer_bulbasaur, answer_charmander, answer_squirtle;

	cout << "Which starter will you pick ?" << endl;
	cout << "You have to answer \'yes\' clearly." << endl; 

	while (!chosen) {

		cout << "Bulbasaur" << endl;
		cin >> answer_bulbasaur;
		if(answer_bulbasaur == "yes") {
			cout << "You've chosen Bulbasaur" << endl;
			*lineup = *all_pokemons;
			chosen = true;
			break;
		}

		cout << "You did not want Bulbasaur, would you prefer Charmander ?" << endl;
		cin >> answer_charmander;
		if(answer_charmander == "yes") {
			cout << "You've chosen Charmander" << endl;
			all_pokemons +=1;
			*lineup = *all_pokemons;
			chosen = true;
			break;
		}

		cout << "You did not want Charmander, would you prefer Squirtle ?" << endl;
		cin >> answer_squirtle;
		if(answer_squirtle == "yes") {
			cout << "You've chosen Squirtle" << endl;
			all_pokemons +=2;
			*lineup = *all_pokemons;
			chosen = true;
			break;
		}
	}
};

int main(int argc, char *argv[]) {

	Pokemon* lineup 		= new Pokemon[6];
	Pokemon* pokedex		= new Pokemon[300];
	Pokemon* all_pokemons 	= new Pokemon[3];
	bool boucle = true;
	string test;
	
	initiate_pokemons(&all_pokemons[0]);
	starter(&lineup[0], &all_pokemons[0]);

	cout << "we are here" << endl; 
	cout << all_pokemons[0].toString() << endl;
	cout << all_pokemons[1].toString() << endl;
	cout << all_pokemons[2].toString() << endl;
	cout << "we are there" << endl;
	while (boucle)
	{
		cout << "running in the nineties" << endl;
		cout << lineup[0].toString();
		cin >> test;
	}
}