#include <iostream>
#include <string>

int quadrado(int numero);
int leiaInteiro(std::string mensagem);


int main()
{
	system("clear");
	int numero = leiaInteiro("Digite um número: ");
	std::cout << "O quadrado de " << numero << " é " << quadrado(numero) ;
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
