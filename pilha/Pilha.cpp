#include "Pilha.hpp"
#include <iostream>

//Implementando construtor
Pilha::Pilha()
{
    qntElementos = 0;
    topo = NULL;
}
//Verifica se a polha ta vazia
bool Pilha::pilhaVazia()
{
    if (qntElementos == 0)
       return true; //pilha vazia
    return false;   
}
//Implementar o push
void Pilha::push(int dado)
{ 
    No *temp = new No;
    temp-> dado = dado; 
    temp-> proxNo = NULL;
    if(pilhaVazia())
       topo = temp;
    else
    {
        temp-> proxNo = topo;
        topo = temp;
    }  
    qntElementos++; 
}
void Pilha::lerTopo()
{
    if(pilhaVazia())
    {
        std::cout<<"Pilha vazia"<<std::endl;
        return;
    }
    else 
       std::cout<<topo->dado<<std::endl;
}