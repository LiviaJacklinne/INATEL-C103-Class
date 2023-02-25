#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int x, resp=1,i;
	
	cout<<"Digite seu numero: ";
	cin>>x;
	for (i=x; i>0; i--)
		resp = resp * i;
	
	cout<<"Total fatorial = "<<resp<<endl;
	
	
	return 0;
}

