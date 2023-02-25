#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float a,b,c,delta,x1,x2;
	
	cout<<"Digite o valor de A: ";
	cin>>a;
	cout<<"Digite o valor de B: ";
	cin>>b;
	cout<<"Digite o valor de C: ";
	cin>>c;
	
	delta = pow(b,2)- 4*a*c;
	if(delta>=0)
	{
		x1= (-b + sqrt(delta))/ (2*a);
		x2= (-b - sqrt(delta))/ (2*a);
		cout<<"x1: "<<x1<<endl;
		cout<<"x2: "<<x2<<endl;
	}
	
	if(delta>0)
		cout<<"Raizes distintas"<<endl;
	if(delta == 0)
		cout<<"Raizes iguais"<<endl;
	if(delta <0)
	    cout<<"Não possui raizes reais"<<endl;
	
	
	return 0;
}

