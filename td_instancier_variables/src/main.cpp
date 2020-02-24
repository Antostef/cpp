#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	// string nom {"florian"};
	// char c {'a'};
	// int i {2.5};
	// bool b {true};
	// float f {1.25};
	// double d {1.75};
	// unsigned int ui {200};

	string nom = "florian";
	char c = 'a';
	int i = 2.5;
	bool b = true;
	float f = 1.25;
	double d = 1.75;
	unsigned int ui = 200;

	std::cout << nom+" " << c << " " << i << " " << b << " " << f << " " << f << " " << d << " " << ui << std::endl;
}