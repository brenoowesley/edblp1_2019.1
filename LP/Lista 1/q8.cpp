#include <iostream>
#include <stdlib.h>

void checa_primo(int numero);

int main() {	
	
	int n			= 0;
	int operacao	= 0;
	

	std::cout << "Digite um número\n";
	std::cin >> n;
 	 	
	for(int i = 2; i <= n; i++){
		checa_primo(i);	
	}
	
	return 0;
	
}



void checa_primo(int numero){
	int divisores = 0;

	for(int i = 2; i <= (numero / 2); i++){
		if(numero % i == 0) divisores++;
	}

	if(divisores == 0){
		std::cout << numero << "\n";
	}

	

}