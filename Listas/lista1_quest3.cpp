#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	float valor, desconto;
	
	cout<<"Digite sua idade: ";
	cin>>idade;
	cout<<"Digite o pre�o do produto: ";
	cin>>valor;
	
	if(idade<30)
	{
		desconto = valor - (0.20*valor);
		cout<<"Com desconto de 20% o pre�o do produto � ";
		cout<<fixed<<setprecision(2)<<desconto<<" R$"<<endl;
	}
	if(idade >= 30 && idade <= 60)
	{
		desconto = valor - (0.30*valor);
		cout<<"Com desconto de 30% o pre�o do produto � ";
		cout<<fixed<<setprecision(2)<<desconto<<" R$"<<endl;
	}
	if(idade>60)
	{
		desconto = valor - (0.40*valor);
		cout<<"Com desconto de 40% o pre�o do produto � ";
		cout<<fixed<<setprecision(2)<<desconto<<" R$"<<endl;
	}
	
	return 0;
}

