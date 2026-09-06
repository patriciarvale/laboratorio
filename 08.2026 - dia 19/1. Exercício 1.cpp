#include <iostream>

using namespace std;

int main () {
	double nota;
	cout << "Digite a nota do aluno"<<endl;
	cin >> nota;
	
	if (nota<=4.9) {
		cout<<"Reprovado";
	}
	else if ( (nota >= 5) && (nota <= 6.9) ){ // a nota precisa ser maior ou igual a 5 E AO MESMO TEMPO ser menor ou igual a 6.9
		cout<<"Recuperacao";
	}
	else {
		cout<<"Aprovado";
	}	
}
