#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

struct Aluno
{
	int mat;
	int npa;
};

//Funcao de ordena��o "por bolha" (Bubble Sort)
void bubbleSort(Aluno *V, int N)
{
	Aluno aux;
	int fim = N;
	bool continua = false;
	do
	{
		//Essa variavel � um flag.
		//Se nenhuma troca ocorrer, o loop while n�o ser� mais executado
		continua = false;
		for (int i = 0; i < fim - 1; i++)
		{
			if(V[i].npa > V[i + 1].npa) //Testa se o anterior � menor que o pr�ximo
			{
				//Faz a troca dos valores
				aux = V[i];
				V[i] = V[i + 1];
				V[i + 1] = aux;
				//Marca "continua" como true, para prosseguir o loop while
				continua = true;
			}
		}
		fim--;//Decrementa o fim, pois conforme o algorimo avan�a, o fim do vetor j� est� ordenado
	}
	while (continua != false);
}

int main()
{


	Aluno al1 = {1234, 65};
	Aluno al2 = {4321, 32};
	Aluno al3 = {12345, 78};
	Aluno al4 = {4444, 63};

	Aluno alunos[] = {al1, al2, al3, al4};



	//Calcula o tamanho do array
	int tam = sizeof(alunos) / sizeof(alunos[0]);

	//imprimir este array fora de ordem
	cout << "Valor do array antes ordena��o." << endl;
	for (int i = 0; i < tam; i++)
	{
		cout << alunos[i].mat << " : " << alunos[i].npa << endl;
	}

	//Chama a funcao de bubble sort, passando o array e o seu tamanho
	bubbleSort(alunos, tam);

	//imprime o array ap�s ser ordenado
	cout << "Valor do array ap�s ordena��o." << endl;
	for (int i = 0; i < tam; i++)
	{
		cout << alunos[i].mat << " : " << alunos[i].npa << endl;
	}

	return 0;

	int main ()
	{
		setlocale(LC_ALL, "Portuguese");

		return 0;
	}
}

