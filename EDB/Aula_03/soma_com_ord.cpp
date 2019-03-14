#include <iostream>
#include <stdlib.h>

int main(){
	int qtde_numeros 	= 20000;
	int* numeros 		= new int[qtde_numeros];
	int numero_desejado = 40;
	int final_array 	= qtde_numeros;
	int prox_num 		= 1;
	int soma 			= 0;

	for (int i = 0; i < qtde_numeros; ++i){ 
		numeros[i] = (rand() % 100) + 1 ;
		

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
	


	for(int i = 0; i < qtde_numeros-2; i++ ){
		final_array = qtde_numeros;
		prox_num = i + 1;
		for(prox_num = 1; prox_num < qtde_numeros-1;){
			
			soma = numeros[i] + numeros[prox_num] + numeros[final_array];
			
			if( soma == numero_desejado){
				std::cout << "1" << "\n";
				std::cout << numeros[i] << "," << numeros[prox_num] << "," << numeros[final_array];
				delete[] numeros;
				return 0;
			}
			else if (soma > numero_desejado)
			{
				prox_num++;
			}
			else {
				final_array--;
			}
		}

	} 


	std::cout << "0";
	delete[] numeros;	
	return 0;
}



