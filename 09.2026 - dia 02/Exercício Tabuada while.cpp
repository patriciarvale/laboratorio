#include <iostream>

using namespace std;

int main () {
	int tabuada;
	int mult = 0; 
	char resposta;
	 
	cout<<"Informe a tabuada desejada:"<<endl;
	cin>>tabuada;
	
	system("cls");
	
	while (mult <= 10) {	
		cout<<tabuada<<" x "<<mult<<" = "<<(tabuada*mult)<<endl;
		mult++;
		
		    do {
   			 char resposta;
    			cout<<"Deseja continuar? (S/N)"<<endl;
			} while (resposta == 'S');
		
    }
    	
}

