#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int x;

	while(x != 888)
	{
		cout << "Digite um numero (888 para sair): ";
		cin >> x;
		if(x != 888)
		{
			if(x % 2 == 0)
				cout << "Numero par!" << endl;
			else cout << "Numero impar!" << endl;
		}
	    else cout<<"FIM!"<<endl;
	}

	return 0;
}

