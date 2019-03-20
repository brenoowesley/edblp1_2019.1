#include <iostream>
#include <stdlib.h>

void checa_ano(int ano);

int main() {	
	
	int n			= 0;
	int ano 		= 1900;
	 

	std::cout << "Digite um ano\n";
	std::cin >> n;
 	 	
	while(ano <= n){
		checa_ano(ano);
		ano+=4;
		
	}
	
	return 0;
	
}



void checa_ano(int ano){
	if(( ano % 100 == 0 )){
		if(ano % 400 == 0){
			std::cout << ano << "\n";
		}
	}
	else{
		std::cout << ano << "\n";
	}
}



