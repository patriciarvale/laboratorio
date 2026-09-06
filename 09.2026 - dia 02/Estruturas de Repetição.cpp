#include <iostream>

using namespace std;

int main () {
	double valor;
	char resposta;
	
do {
	
	cout<<"Digite o valor do produto: "<<endl;
	cin>>valor;
	
	if (valor < 100){
		cout<<"SEM DESCONTO, valor do produto: R$ "<<valor<<endl<<endl; // teste
	}
	else if (valor >= 100 && valor <200){
		cout<<"Aplicado 10% de desconto, de: R$ "<<valor<<" sai por: R$ "<<(valor * 0.90)<<endl<<endl;
	}
	else {
		cout<<"Aplicado 20% de desconto, de: R$ "<<valor<<" sai por: R$ "<<(valor * 0.80)<<endl<<endl;
	}
	
	cout<<"Deseja realizar outro calculo? (S/N)"<<endl;
	cin>>resposta;
	
	system("cls");
	
  } while (resposta == 'S');
	
}


