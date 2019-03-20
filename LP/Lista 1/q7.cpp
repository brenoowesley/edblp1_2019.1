#include <iostream>
#include <stdlib.h>

int main() {	
	
	int n		= 0;
	int soma	= 0;
	
	std::cout << "Digite um número\n";
	std::cin >> n;
 	system("cls");
	for(int i = 1; i <= 10; i++){
		std::cout << n << " x " << i << " = " << n * i << "\n";
	}

	return 0;
}