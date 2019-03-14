#include <iostream>
#include <stdlib.h>


int main(){
	int qtde_numeros = 0;
	int numero_desejado = 0;
	std::cout << "Digite o tamanho do array: ";
	std::cin >> qtde_numeros;
	std::cout << "Digite o numero desejado: ";
	std::cin >> numero_desejado;
	
	int* numeros = new int[qtde_numeros];

	for (int i = 0; i < qtde_numeros; i++){ 
		numeros[i] = rand() % 100;
		std::cout << numeros[i] << "\n" ;
	}
	std::cout << "\n\n\n";

	for (int i = 0; i < qtde_numeros; i++){ d
	
		for(int j = i + 1; j < qtde_numeros; j++ ){
			if((numeros[i] + numeros[j] + numeros[j+1]) == numero_desejado){
				std::cout << numeros[i] << "," << numeros[j] << "," << numeros[j+1];
				// return 1;
			}
		}
		// std::cout << numeros[i] << "\n" ;
	}

}