#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float vet[15], maior=-99999999;
    int x=1;
	
	for(int i=0; i<15;i++)
	{
		cout<<"Digite o valor do "<<x<<"� numero: ";
		cin>>vet[i];
		x++;
        if(maior < vet[i])
        	maior = vet [i];
	}
	cout<<"O maior numero digitado �: "<<maior<<endl;
	
	return 0;
}

