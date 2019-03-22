#include <iostream>

int main(){
	int num[] = {6,2,4,8,10,5};
	int qtd_num = 6;
	int aux = 0;

	for(int i = 0; i < qtd_num-1; ++i){
		
		
		for(int j = i + 1; j < qtd_num; ++j){
			int primeiro_numero = num[i];		
			int segundo_numero 	= num[j];

			if(segundo_numero < primeiro_numero){
				num[i] = segundo_numero;
				num[j] = primeiro_numero;

			}
		}

	}

	for(int i = 0; i < qtd_num; ++i){
		std::cout << num[i] << '\n';
	}


	return 0;
}