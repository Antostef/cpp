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
	fibonacci(l);
	
	while (go == 1) {
		cout << "Voulez vous la suite";
		cin >> go
		 if (go == 1) { fibonacci(&l+1);}
	}
	
}

int main(int argc, char *argv[]) {
	
	int i {-3};
	bool b = i < 0;
	std::cout << b << std::endl;
}