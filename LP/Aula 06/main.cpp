#include <iostream>
#include <cstdlib>
#include "itens.h"

int display_menu();
void display_message(std::string message);
void run(item* itens, int& qtd_itens, int qtd_maxima, int opcao);
void add_item(item* itens, int& qtd_itens, const int qtd_maxima);
void list_itens(item* itens, int qtd_itens);

int main(){

	const int QTD_MAXIMA	= 100;
	item* itens 			= new item[QTD_MAXIMA];
	int qtd_itens 			= 0;

	int opcao = display_menu();
	run(itens, qtd_itens, QTD_MAXIMA, opcao);


	delete[] itens;
	return 0;


}

int display_menu(){
	
	system("clear");
	std::cout << "Emprestimos S.A" << "\n";
	std::cout << "---------------" << "\n";
	std::cout << "1 - Cadastrar Itens" << "\n";
	std::cout << "2 - Cadastrar Pessoas" << "\n";
	std::cout << "3 - Realizar Empréstimo" << "\n";
	std::cout << "4 - Realizar Devolução" << "\n";
	std::cout << "5 - Listar Todos os Itens" << "\n";
	std::cout << "6 - Listar Itens emprestados" << "\n";
	std::cout << "7 - Listar todas pessoas" << "\n";
	std::cout << "8 - Sair" << "\n";
	std::cout << "---------------" << "\n";

	int opcao = -1;
	std::cout << "Escolha uma opção: ";
	std::cin >> opcao;

	if(opcao <= -1 || opcao > 9 ){
		display_message("Opção inválida");
		display_menu();
	}
	return opcao;
}

void display_message(std::string message){
	system("clear");
	std::cout << message << "\n";
	system("sleep 1s");
	system("clear");

}

void run(item* itens, int& qtd_itens, int qtd_maxima, int opcao){
		switch(opcao){
		case 1: 
			add_item(itens, qtd_itens, qtd_maxima);
			break;
		case 2: 
			break;			
		case 3: 
			break;
		case 4: 
			break;			
		case 5: 
			list_itens(itens, qtd_itens);
			break;
		case 6: 
			break;
		case 7: 
			break;
		case 8: 
			display_message("Até mais...");
			break;

	}
}

void add_item(item* itens, int& qtd_itens, const int qtd_maxima){
	std::string	nome;
	std::cout << "Adicione um item: ";
	std::cin >> nome;

	itens[qtd_itens].nome = nome; 
	qtd_itens +=1;
	display_message("Item adicionado com sucesso");
	display_menu();

}

void list_itens(item* itens, int qtd_itens){
	for(int i = 0; i <= qtd_itens; i++){
		std::cout <<"Item: " << i + 1 << "Nome" <<  itens[i].nome << "\n";
	}

}