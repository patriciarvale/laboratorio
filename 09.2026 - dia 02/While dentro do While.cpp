#include <iostream>

using namespace std;

int main () {
	int tabuada;
	char resposta;
	 
do {
	   
    int mult = 0;
	
	cout<<"Informe a tabuada desejada:"<<endl;
	cin>>tabuada;
	
	system("cls");
	
	while (mult <= 10) {	
		cout<<tabuada<<" x "<<mult<<" = "<<(tabuada*mult)<<endl;
		mult++;
    }
    
    cout<<"Deseja calcular outra tabuada? (S/N)"<<endl;
    cin>>resposta;
    
}  while (resposta == 'S'); 
    
}
