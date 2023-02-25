#include <iostream>
#include "lista2.hpp"

using namespace std;

//Construtor
listaEncadeada::listaEncadeada()
{
	cabeca = NULL;
	cauda = NULL;
	totalElementos = 0;
}

//Funçaõ para devolver quantidade de elementos
int listaEncadeada::devolverTotalElementos()
{
	return this-> totalElementos;
}

//Função que verifica se a lista esta vazia
bool listaEncadeada::listaVazia()
{
	if (totalElementos == 0)
		return true; //lista vazia
	else return false;
}

//Função para inserir no fim
void listaEncadeada::inseroNoFim(int dado)
{
	//nó encadeado
	//temp é uma variavel que aponta para o endereço do ultimo elemento
	no *temp = new no; // temp é uma variavel temporaria
	temp->dado = dado;
	temp->proxNo = NULL;

	//verifica se a lista esta vazia
	if(listaVazia())
	{
		//se estiver vazia
		cabeca = temp;
		cauda = temp;
	}
	else //se não estiver vazia
	{
		cauda->proxNo = temp;
		cauda = temp;
	}
	totalElementos++;
}

//Função para remover no fim
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

//Função inserir inicio
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

//função para remover inicio
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

//Função para ler a lista, mostrar os dados
void listaEncadeada:: percorrerLista()
{
	if(listaVazia())
		cout << "Lista Vazia" << endl;
	else
	{
		//temp aponta para cabeça, copia o endereço da cabeça
		//cabeça é onde a lista começa
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





