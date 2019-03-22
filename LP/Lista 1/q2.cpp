#include <iostream>
#include <stdlib.h>
#include <string>

int main() {	
	std::string nome;

	std::cout << "Digite seu nome: ";
	std::cin >> nome;
	std::cout << "Hello, " << nome;
	return 0;
}