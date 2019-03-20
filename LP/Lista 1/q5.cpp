#include <iostream>
#include <stdlib.h>

int main() {	
	
	int n		= 0;
	int soma	= 0;
	
	std::cout << "Digite um número\n";
	std::cin >> n;
 	
	for(int i = 0; i <= n; i++){
		if(i!=0 && (i % 3 == 0 || i % 5 == 0)){
			soma = soma + i;
		}
	}
	
	std::cout << soma;
	return 0;
}