#include <iostream>

using namespace std;

int main () {
	
	int tabuada;
	int mult = 10; // int mult = 0; (para tabuada crescente)
	
	cout<<"Informe a tabuada desejada:"<<endl;
	cin>>tabuada;
	
	system("cls");
	
	do {
		cout<<tabuada<<" x "<<mult<<" = "<<(tabuada*mult)<<endl;
		mult--;
	}
	 while (mult >= 0); // mult <= 10; (para tabuada crescente)
	
	
}
