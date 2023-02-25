#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

void troca(int **endpa, int **endpb)
{
	int *aux = *endpa;
	*endpa = *endpb;
	*endpb = aux;
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int a = 1, b = 2;// a e b são os valores da variavel
	int *pa = &a, *pb = &b;// pb e pa recebem o endereço das variaveis a e b
	
	troca(&pa,&pb); // passando o parametro
	
	cout<<"A = "<<*pa<<" B = "<<*pb<<endl;
	
	return 0;
}

/*
#include <iostream>
 
using namespace std;
 
void troca(int** end1, int** end2){ 
 
 int* endTemp = *end1; 
 *end1 = *end2; 
 *end2 = endTemp; 
 
 //*end2 eh um endereco de um ponteiro (pb) int*
}
 
int main(){
 
 int a = 1, b = 2;
 int* pa = &a; //a esta salvo em 0x0000 pa = 0x0000
 int* pb = &b; //b esta salvo em 0x000F pb = 0x000F
 
 //pa esta salvo em 0x1000
 //pb esta salvo em 0x100F 
 
 //Imprimindo os valores de a e b pelos ponteiros
 cout<< "Valor de a: "<< *pa << " e b :" << *pb << endl; 
 
 //Chama a funcao "troca" passando o endereco do ponteiro pa e pb 
 troca(&pa,&pb);
 
 cout << "Valores de enderecos trocados!" << endl;
 
 cout<< "Valor de a: "<< *pa << " e b :" << *pb << endl; 
 
 return 0;
}
*/

