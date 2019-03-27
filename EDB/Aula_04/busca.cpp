#include <iostream>
#include <cstdlib>

	int buscando(int* numeros, int qtd_numeros, int metade_array, int numero_desejado){
		
		if(metade_array < 1 || metade_array > qtd_numeros){
			return -1;
		}	
		
		else if(numeros[metade_array] == numero_desejado){
			return numeros[metade_array] ;
		}
		else if(numeros[metade_array] > numero_desejado ){
		 	metade_array = metade_array/2;

		 	buscando(numeros, qtd_numeros, metade_array, numero_desejado);

		 }
		 else{
		 	metade_array = metade_array + (metade_array/2);
		 	std::cout << metade_array << "\n";
		 	buscando(numeros, qtd_numeros, metade_array, numero_desejado);
		 }
	}