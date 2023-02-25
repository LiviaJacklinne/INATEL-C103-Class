#include <iostream>
#include "lista1.hpp"
using namespace std;

//Construtor
ListaEncadeada::ListaEncadeada()
{
    cabeca = NULL;
    cauda = NULL;
    numElementos = 0;
}
int ListaEncadeada::contarNumElementos()
{
    return this-> numElementos;
}
bool ListaEncadeada::listaVazia()
{
    if(numElementos == 0)
       return true; //lista vazia
    else 
       return false; // lista não ta vazia   
}
void ListaEncadeada:: lerLista()
{
    if(listaVazia())
		cout << "Lista Vazia" << endl;
	else
	{
		No *temp = cabeca; /*temp aponta para cabeça,cabeça é onde a lista começa*/
		while(temp != cauda->proxNo)
			//se temp = cauda-> proxNo, o while continua
			//qnd temp = cauda while para, pois a cauda do ultimo aponta para NULL(fim da lista)
		{
			cout << temp->dado << endl;
			temp = temp->proxNo;
		}
	}
}
void ListaEncadeada::inserirFim(int dado)
{
    //Alocando memoria para o proximo elemento
    No *temp = new No;
    temp-> dado = dado;
    temp -> proxNo = NULL;
    if(listaVazia())
    {
        cabeca = temp;
        cauda = temp;
    }
    else
    {
        cauda -> proxNo = temp;/* essa cauda vai passar a ser o penultimo elemento após incrementarmos
        o novo ultimo elemento, e como ela é o penultimo o poximo nó dela recebe o endereço do novo
        ultimo elemento. A variavel temporaria tem o endereço desse novo ultimo elemento*/
        cauda = temp;
    }
    numElementos++;
}
void ListaEncadeada :: removerFim()
{
    if (listaVazia())
       return;
    if (numElementos == 1)
       removerElementoUnico();
    else
    {
        No *temp = cabeca; //a variavel temp recebe o endereço da cabeça para começar a percorrer a lista
        while(temp->proxNo != cauda)/*enquanto o proximo endereço for diferente da cauda executa, se for 
        igual, significa que chegamos no penultimo elemento, no caso o "futuro" ultimo elemento*/
        {
            temp = temp->proxNo;
        }
        cauda = temp; /*temp no momento tem o endereço do penultimo elemento, q futuramente sera o ultimo e a
        cauda aponta para o ultimo elemento, ent após apagar o ultimo elemento a cauda deve ser atualizada*/
        delete temp-> proxNo; // temp->proxNo, aponta para o endereço do elemento que a gnt quer apagar
        cauda-> proxNo = NULL;/*Cauda atual tem o endereço do ultimo elemento, e o proximo nó desse 
        elemento aponta para nulo*/
    }   
    numElementos --;
}
void ListaEncadeada:: inserirInicio(int dado)
{
    //Alocando memoria para o proximo elemento
    No *temp = new No;
    temp-> dado = dado;
    temp -> proxNo = NULL;
    if(listaVazia())
    {
        cabeca = temp;
        cauda = temp;
        cabeca-> proxNo = NULL;
    }
    else
    {
        /*antes de executarmos a prox linha proxNo do novo elemento aponta para o nulo*/
        temp -> proxNo = cabeca;/*temp é a variavel que tem o endereço do novo elemento, o proximo nó
        desse novo elemento precisa apontar para a "antiga cabeça", essa cabeça vai ser atualizada
        na prixoma linha  */
        cabeca =temp;/*temp tem o endereço do novo primeiro elemento, então vamos atualizar a cabeça*/
    }
    numElementos++;
}
void ListaEncadeada:: removerInicio()
{
    if(listaVazia())
       return;
    if(numElementos == 1)
       removerElementoUnico();
    else
    {
        No *temp = cabeca; /*No é o tipo de "temp", temp é um ponteiro que recebe o endereço da cabeça*/
        cabeca = cabeca-> proxNo; /*cabeca-> proxNo, tem o endereço do segundo elemento, que sera a nova
        "cabeca",o "novo primeiro elemento", assim que essa linha for executada*/
        delete temp;/*apagando o "primeiro" elemento da memoria*/
    }   
    numElementos --;   
}
