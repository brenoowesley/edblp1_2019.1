#include <iostream>
#include <stdlib.h>

bool checa_numero(int numero_jogada, int numero_desejado, bool acertou);

int main() {	
	
	int qtd_jogadas		= 0;
	int numero_desejado	= rand() % 100;
	int jogada_atual	= 0;
	int numero_jogada 	= 0;
	bool acertou = false;


	system("cls");
	std::cout << "Digite a quantidade de jogadas desejada: ";
	std::cin >> qtd_jogadas;
	std::cout << numero_desejado;

	for(jogada_atual = 0; jogada_atual < qtd_jogadas; jogada_atual++){
		std::cout << "\nVoce ainda tem " << qtd_jogadas - jogada_atual << " jogadas\n";
		std::cout << "Digite um numero: ";
		std::cin >> numero_jogada;	
		acertou = checa_numero(numero_jogada, numero_desejado, acertou);
		if(acertou) return 0;
	}

	
	return 0;
	
}





bool checa_numero(int numero_jogada, int numero_desejado, bool acertou){
	if(numero_jogada != numero_desejado){
		if(numero_jogada > numero_desejado){
			std::cout << "O numero colocado eh maior do que o numero desejado";
		}
		else{
			std::cout << "O numero colocado eh menor do que o numero desejado";
		}
	}
	else{
		std::cout << "Voce acertou";
		return acertou = true;
	}
	return acertou = false;
}