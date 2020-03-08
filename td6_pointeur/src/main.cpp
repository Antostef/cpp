#include <iostream>
#include <string>
using namespace std;

void show_address(int i) {
	cout << &i <<  endl;
}

void showAddress(int x) {
	cout << &x;
}

void show_value_via_address(int* i) {
	cout << *i <<  endl;
}


int main(int argc, char *argv[]) {
	int j 	= 2;
	int* i 	= &j;

	show_address(j);
	show_value_via_address(i);
}