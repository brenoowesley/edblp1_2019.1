#include <iostream>
#include <stdlib.h>

int main() {	
	
	int n			= 0;
	int operacao	= 0;
	

	std::cout << "Digite um numero\n";
	std::cin >> n;
 	
 	
	for(int i = 0; i <= n; i++){
		operacao = operacao + i;
	}

	std::cout << "O resultado eh: "<< operacao;
	return 0;


	
}