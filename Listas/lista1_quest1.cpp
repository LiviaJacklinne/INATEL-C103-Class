#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float x,y,resp;
	int op;
	char k;
	
	cout<<"Digite o primeiro valor: ";
	cin>>x;
	cout<<"Digite o segundo valor: ";
	cin>>y;
	cout<<"Digite o operador: "<<endl;
	do
	{
		cout<<"1 - soma"<<endl;
	    cout<<"2 - subtra��o"<<endl;
	    cout<<"3 - multiplica��o"<<endl;
        cout<<"4 - divis�o"<<endl;
		cin>>op;
		
	} while (!(op==1 || op==2 || op==3 || op==4));
	
	
	if(op == 1)
	{
		resp = x+y;
		k = '+';
		cout<<x<<k<<y<<" = "<<resp<<endl;
	}
	else if(op == 2)
	{
		resp = x-y;
		k = '-';
		cout<<x<<k<<y<<" = "<<resp<<endl;
	}
	else if(op == 3)
	{
		resp = x*y;
		k = '*';
		cout<<x<<k<<y<<" = "<<resp<<endl;
	}
	else
	{
		if(y != 0 )
		{
			resp = x/y;
		    k = '/';
		    cout<<x<<k<<y<<" = "<<resp<<endl;
		}
		else cout<<"N�o � possivel divis�o por zero"<<endl;
	}
	
	
	
	return 0;
}

