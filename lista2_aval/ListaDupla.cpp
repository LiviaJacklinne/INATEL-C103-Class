#include <iostream>
#include "ListaDupla.hpp"

//Construtor
ListaDupla::ListaDupla()
{
    int dado;
    No *proxNo;
    No *antesNo;
    qtdElemento = 0;
}
//Remove elemento unico
void ListaDupla::removeElementoUnico()
{
    No *temp = cabeca;
    delete temp;
    cabeca = NULL;
    cauda = NULL;
}
//Verifica se a lista esta vazia
bool ListaDupla::listaVazia()
{
    if(qtdElemento == 0)
       return true; // lista vazia
    return false;   
}
//Inserir elemento no fim 
void ListaDupla::inserirNoFim(int dado)
{
    No *temp = new No;
    temp -> dado = dado;
    temp -> proxNo = NULL;
    if (listaVazia())
    {
        cabeca = temp;
        cauda = temp;
        cabeca->antesNo = NULL;
        cauda-> proxNo = NULL;
    }
    else 
    {
        cauda-> proxNo = temp;
        temp->antesNo = cauda;
        cauda = temp;  
    }
    qtdElemento ++;
}
//Remover elemento do fim
void ListaDupla::removerDoFim()
{
    if(listaVazia())
    {
        std::cout<<"Lista Vazia"<<std::endl;
        return;
    }
    if(qtdElemento == 1)
       removeElementoUnico();
    else 
    {
        No *temp = cabeca;
        while (temp->proxNo != cauda)
        {
            temp = temp -> proxNo;
        }
        cauda = temp;
        delete temp -> proxNo;
        cauda -> proxNo = NULL;
    }   
    qtdElemento --;
}
void ListaDupla::percorrerDoInicio()
{
    if(listaVazia())
    {
        std::cout<<"Lista vazia"<<std::endl;
        return;
    }
    else 
    {
        No *temp = cabeca;
        while (temp != cauda->proxNo)
        {
            std::cout<<temp->dado<<std::endl;
            temp = temp -> proxNo;
        }
    }
}
void ListaDupla::percorrerDoFim()
{
    if(listaVazia())
    {
        std::cout<<"Lista Vazia"<<std::endl;
        return;
    }
    else
    {
        No *temp = cauda;
        while(temp!= cabeca->antesNo)
        {
            std::cout<<temp->dado<<std::endl;
            temp = temp -> antesNo;
        }
    }
}
