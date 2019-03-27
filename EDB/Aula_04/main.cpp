#include <iostream>
#include <stdlib.h>
#include "busca.h"
// http://waldson.com.br/edb1/trabalho-complexidade.pdf



int main(){
	int qtde_numeros 	= 100000;
	int* numeros 		= new int[qtde_numeros];
	int metade_array 	= qtde_numeros/2;
	int numero_desejado = 20;
	int aux 			= 0;



	for (int i = 0; i < qtde_numeros; ++i){ 
		numeros[i] = (rand() % 100) + 1 ;
	}

	// ordena o array
	for(int i = 0; i < qtde_numeros - 1; ++i){  
		for(int j = i + 1; j < qtde_numeros; ++j){ 
			int primeiro_numero = numeros[i]; 
			int segundo_numero = numeros[j]; 


			if(segundo_numero < primeiro_numero){ 
				numeros[i] = segundo_numero;
				numeros[j] = primeiro_numero; 
			}

		}
	}

	// for (int i = 0; i < qtde_numeros; ++i){ 
	// 	std::cout << numeros[i] << ", ";
	// }

	// std::cout << "\n";
	// std::cout << "\n";
	// std::cout << "\n";
	// std::cout << "\n";
	// std::cout << "\n";
	// std::cout << "\n";
	// std::cout << "\n";
	

	std::cout<< buscando(numeros, qtde_numeros, metade_array, numero_desejado);

	


 
	delete[] numeros;	
	return 0;
}