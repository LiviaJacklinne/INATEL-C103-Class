#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float vet[15], soma;
	int x =1;
	
	for(int i=0; i<15;i++)
	{
		cout<<"Digite o valor do "<<x<<"º numero: ";
		cin>>vet[i];
		x++;
		soma = soma + vet[i];
	}
	cout<<"A media dos 15 numeros é: "<<soma/15.0<<endl;
	
	return 0;
}

