// Reprenez la methode developpee precedemment pour fibonnacci. Modifiez la pour que l'utilisateur donne en avance 
// le nombre de chiffres qu'il aimerait recuperer. Stockez les dans un tableau puis affichez les grace a une boucle.
// Astuce : pour acceder aux valeurs d'un tableau on ecrit: "myArray[index]"

// Modifiez ensuite votre code pour aue l'utilisateur puisse ajouter un nombre libre de valeurs 
// s'il le souhaite apres chaque affichage.

#include <iostream>
#include <string>
using namespace std;

int divide(int i, int j) {
	return i / j;
}

int multiply(int i, int j) {
	return i * j;
}

int substract(int i, int j) {
	return i - j;
}

int add(int i, int j) {
	return i + j; 
}

bool is_odd(int i) {
	if(i < 0) return true;
	else return false;
}

long fibonacci(long l = 1) {
	if ( l > 1) {
		return fibonacci(l-1)+fibonacci(l-2);
	} else if ( l == 1) {
		return 1;
	} else return 0;
}

void fibonacci_boucle() {
	long l = 1;
	int go = 1; 
	cout << fibonacci(l) << std::endl;
	
	while (go == 1) {
		cout << "Voulez vous la suite ?";
		cin >> go;
		l++;
		cout << fibonacci(l) << std::endl;
	}
	
}

int main(int argc, char *argv[]) {
	
	std::cout << divide(2,7) << std::endl;
	std::cout << add(2,7) << std::endl;
	std::cout << substract(2,7) << std::endl;
	std::cout << multiply(2, 7) << std::endl;

	fibonacci_boucle();
}