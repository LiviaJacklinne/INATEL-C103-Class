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
	
	cout<<"Digite o numero desejado: ";
	cin>>x;
	for(int i=0; i<=10;i++)
		cout<<x<<"x"<<i<<" = "<<x*i<<endl;
	
	
	return 0;
}

