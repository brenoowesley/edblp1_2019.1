#include <iostream>
#include <string>
//Lista de exercícios: waldson.com.br/lp1/lista01.pdf
//
//
//
//
//
//
//
int quadrado(int numero);
int leiaInteiro(std::string mensagem);
int soma(int primeiro_numero, int segundo_numero);	
void escreva(std::string);

int main()
{
	system("clear");
	int numero = leiaInteiro("Digite um número: ");
	std::cout << "O quadrado de " << numero << " é " << quadrado(numero)<< "\n" ;
	std::cout << "A soma dos numeros dados é: " << soma(leiaInteiro("Digite o primeiro numero"),leiaInteiro("Digite o segundo numero"));
	return 0;
}



int quadrado(int numero){
	
	return numero * numero;
	 

}

int leiaInteiro(std::string mensagem){

	int numero = 0;
	escreva(mensagem);
	std::cin >> numero;
	

	return numero;
}

int soma(int primeiro_numero, int segundo_numero){
	return	primeiro_numero + segundo_numero;
}




void escreva(std::string mensagem){
	std::cout << mensagem << "\n";

}