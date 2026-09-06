#include <iostream>

using namespace std;

int main () {
	double valor;
	cout<<"Digite o valor do produto: "<<endl;
	cin>>valor;
	
	if (valor < 100){
		cout<<"SEM DESCONTO"<<endl;
	}
	else if (valor >= 100 && valor <200){
		// double preco = valor * 0.90; // cout<<"Aplicado 10% de desconto, de: R$ "<<valor<<" sai por: R$ "<<(valor * 0.90)<<endl;
		// cout<<"Aplicado 10% de desconto, de: "<<valor<<" por: "<<preco<<endl;
		cout<<"Aplicado 10% de desconto, de: R$ "<<valor<<" sai por: R$ "<<(valor * 0.90)<<endl;
	}
	else {
		//double preco = valor * 0.80;
		//cout<<"Aplicado 20% de desconto, de: "<<valor<<" por: "<<preco<<endl;
		cout<<"Aplicado 20% de desconto, de: R$ "<<valor<<" sai por: R$ "<<(valor * 0.80)<<endl;
	}
	
}

