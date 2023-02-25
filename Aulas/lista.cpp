#include <iostream>
#include "lista.h"
using namespace std;

//Construtor
listaEncadeada::listaEncadeada()
{
	cabeca = NULL;
	cauda = NULL;
	totalElementos = 0;
}

//Fun�a� para devolver quantidade de elementos
int listaEncadeada::devolverTotalElementos()
{
	return this-> totalElementos;
}

//Fun��o que verifica se a lista esta vazia
bool listaEncadeada::listaVazia()
{
	if (totalElementos == 0)
		return true; //lista vazia
	else return false;
}

//Fun��o para inserir no fim
void listaEncadeada::inseroNoFim(int dado)
{
	//n� encadeado
	//temp � uma variavel que aponta para o endere�o do ultimo elemento
	no *temp = new no; // temp � uma variavel temporaria
	temp->dado = dado;
	temp->proxNo = NULL;

	//verifica se a lista esta vazia
	if(listaVazia())
	{
		//se estiver vazia
		cabeca = temp;
		cauda = temp;
	}
	else //se n�o estiver vazia
	{
		cauda->proxNo = temp;
		cauda = temp;
	}
	totalElementos++;
}

//Fun��o para remover no fim
void listaEncadeada:: removerFim()
{
	if(listaVazia())
		return;
	if (totalElementos == 1)
		removeElementoUnico();
	else
	{
		no *temp = cabeca;
		while(temp->proxNo != cauda)
		{
			temp = temp-> proxNo;
		}
		cauda = temp;
		delete temp->proxNo;
		cauda->proxNo = NULL;
	}
	totalElementos --;
}

//Fun��o inserir inicio
void listaEncadeada::inserirInicio(int dado)
{
	no *temp = new no;
	temp ->dado = dado;
	if(listaVazia())
	{
		cabeca = temp;
		cauda = temp;
		cabeca->proxNo = NULL;
	}
	else
	{
		temp->proxNo = cabeca;
		cabeca = temp;
	}
	totalElementos ++;
}

//fun��o para remover inicio
void listaEncadeada:: removeInicio()
{
	if(listaVazia())
		return;
	if(totalElementos == 1)
		removeElementoUnico();
	else
	{
		no *temp = cabeca;
		cabeca = cabeca->proxNo;
		delete temp;
	}
	totalElementos --;
}

//Fun��o para ler a lista, mostrar os dados
void listaEncadeada:: percorrerLista()
{
	if(listaVazia())
		cout << "Lista Vazia" << endl;
	else
	{
		//temp aponta para cabe�a, copia o endere�o da cabe�a
		//cabe�a � onde a lista come�a
		no *temp = cabeca;
		while(temp != cauda->proxNo)
			//se temp = cauda-> proxNo, o while continua
			//qnd temp = NULL, while para. A cauda do ultimo elemento aponta para NULL
		{
			cout << temp->dado << endl;
			temp = temp->proxNo;
		}
	}
}





