#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int inicio,fim,i,par=0,impar=0;
	
	cout<<"Digite o valor inicial: ";
	cin>>inicio;
	cout<<"Digite o valor final: ";
	cin>>fim;
	if (inicio < fim)
	{
		for(i = inicio; i<= fim; i++)
			if (i%2 == 0)
			par++;	
			else impar++;
		cout<<"Total de numero pares: "<<par<<endl;
		cout<<"Total de numero impares: "<<impar<<endl;
		
	}
	else cout<<"Numero final menor que o incial, erro!"<<endl;
	
	return 0;
}

