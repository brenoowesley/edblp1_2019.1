#include <iostream>
#include <stdlib.h>

int main() {	
	
	int n		= 0;
	int operacao	= 0;
	int opc = 0;

	std::cout << "Escolha uma operacao 1 - Soma | 2 - Multiplicacao: ";
	std::cin >> opc;
	std::cout << "Digite um número\n";
	std::cin >> n;
 	
 	if(opc == 1){
		
		for(int i = 0; i <= n; i++){
				operacao = operacao + i;
		}
		std::cout << operacao;
		return 0;
	} 
	else if(opc == 2){
		
		operacao = 1;
		
		for(int i = 1; i <= n; i++){
				operacao = operacao * i;
		}
		
		std::cout << operacao;
		return 0;
	}
	else{
		std::cout << "Não existe essa opção";
	}

	
}