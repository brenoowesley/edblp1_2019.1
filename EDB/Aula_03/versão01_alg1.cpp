#include <iostream>
#include <cstdlib>


int main(){
	int qtde_numeros	= 0;
	int numero_desejado = 0;

	std::cout << "Digite o tamanho do array: ";
	std::cin >> qtde_numeros;
	std::cout << "Digite o numero desejado: ";
	std::cin >> numero_desejado;
	
	int* numeros 		= new int[qtde_numeros];

	for (int i = 0; i < qtde_numeros; i++){ 
		numeros[i] 		= rand() % 100;
		std::cout << numeros[i] << "\n" ;
	}
	std::cout << "\n\n\n";

	for (int i = 0; i < qtde_numeros-2; i++){ 
	
		for(int j = i + 1; j < qtde_numeros-1; j++ ){
			for k = j +1; k < qtde_numeros; j++)
			if((numeros[i] + numeros[j] + numeros[k]) == numero_desejado){
				std::cout << numeros[i] << "," << numeros[j] << "," << numeros[k];
				


				 delete[] numeros;	
				 return 0;
			}
		}
		
	}

	delete[] numeros;

}