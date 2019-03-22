#include <iostream>
#include <stdlib.h>

int main(){
	int qtde_numeros = 200000;
	int* numeros = new int[qtde_numeros];

	for (int i = 0; i < qtde_numeros; ++i){ 
		numeros[i] = rand() % 10000;
		

	}


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


	delete[] numeros;	1
	return 0;
}



