#include <iostream>
#include <string>

int quadrado(int numero);
int leiaInteiro(std::string mensagem);
int soma(int primeiro_numero, int segundo_numero);


int main()
{
	system("clear");
	int numero = leiaInteiro("Digite um número: ");
	std::cout << "O quadrado de " << numero << " é " << quadrado(numero)<< "\n" ;
	std::cout << "E o número que você quer é: " << soma(leiaInteiro("Digite o primeiro numero"),leiaInteiro("Digite o segundo numero"));
	return 0;
}



int quadrado(int numero){
	
	return numero * numero;
	 

}

int leiaInteiro(std::string mensagem){

	int numero = 0;
	std::cout << mensagem << "\n";
	std::cin >> numero;
	

	return numero;
}

int soma(int primeiro_numero, int segundo_numero){
	return	primeiro_numero + segundo_numero;
}