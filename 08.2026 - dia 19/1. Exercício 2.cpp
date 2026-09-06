#include <iostream>

using namespace std;

int main () {
	double num_1;
	double num_2;
	char operador;
	cout<< "Digite o primeiro numero: "<<endl;
	cin>> num_1;
	cout<< "Digite o segundo numero: "<<endl;
	cin>> num_2;
	cout<< "Digite um operador (+, -, *, /) "<<endl;
	cin>> operador;
	
	if (operador == '+') {
		double resultado = num_1 + num_2; // cout<<'Resultado: "<<(num_1 + num_2); 
		cout<<resultado<<endl;
	}
	else if (operador == '-'){
		double resultado = num_1 + num_2;
		cout<<resultado<<endl;
	}
	else if (operador == '*'){
		double resultado = num_1 * num_2;
		cout<<resultado<<endl;
	}
	else if (operador == '/'){
		double resultado = num_1 / num_2;
		cout<<resultado<<endl;
	}
	else {
		cout<<"Nao e um operador valido"<<endl;
	}	
	
}
