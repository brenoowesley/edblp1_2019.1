#include <iostream>

int main(){
	int numero1 = 0;
	int numero2 = 0;
	int numero3 = 0;
	int aux		= 0;


	std::cout << "Informe o primeiro numero: ";
	std::cin >> numero1; 
	std::cout << "Informe o segundo numero: ";
	std::cin >> numero2; 
	std::cout << "Informe o terceiro numero: ";
	std::cin >> numero3; 
	


	for(int i =0; i < 2; i++){	
		if(numero1 > numero2){
			aux = numero1;
			numero1 = numero2;
			numero2 = aux;

			}
		if(numero2 > numero3){
				aux = numero2;
				numero2 = numero3;
				numero3 = aux;	
		}
	}
	std::cout << numero1 << ", " <<numero2 << ", " << numero3;
	return 0;
}