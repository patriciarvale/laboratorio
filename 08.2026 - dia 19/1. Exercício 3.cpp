#include <iostream>

using namespace std;

int main () {
	int ano;
	cout<< "Digite o ano: "<<endl;
	cin>>ano;
	
	// int resultado1 = ano % 4;  // pega o ano digitado, divide por 4 e armazena o resto na variavel 'resultado1'
	// int resultado2 = ano % 100; // pega o ano digitado, divide por 100 e armazena o resto na variavel 'resultado2'
	// int resultado3 = ano % 400; // pega o ano digitado, divide por 400 e armazena o resto na varial 'resultado3'
	
	if ((ano%4 == 0) && (ano%100 != 0) || (ano%400 == 0)) { 
		cout<< "O ano eh bissexto"<<endl;
	}
	else {
		cout<< "O ano nao eh bissexto";
	}
	
	
}
