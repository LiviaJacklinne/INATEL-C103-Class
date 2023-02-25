#include <iostream>
#include "fila.hpp"

Fila :: Fila()
{
    inicio = NULL;
    fim = NULL;
    qntElementos = 0;
}
//Verifica se esta vazia
bool Fila::filaVazia()
{
    if(qntElementos == 0)
       return true;
    else return false;
}
//Mostra a quantidade de elementos
int Fila::mostraQntElementos()
{
    return this-> qntElementos;
}
//Enfileirando informações
void Fila :: enqueue(int dado)
{
    No *temp = new No;
    temp -> dado = dado;
    temp -> proxNo = NULL;

    if(filaVazia())
    {
        inicio = temp; /* Nesse caso inicio e temp são variaveis do tipo No, e ambos são ponteiros*/
        fim = temp; /* Nesse caso fim e temp são variaveis do tipo No, e ambos são ponteiros*/
    }
    else
    {
        fim-> proxNo = temp;
        fim = temp;
    }
    qntElementos++;
}
//Mostrar inicio
void Fila:: mostrarInicio()
{
    if(filaVazia())
    {
        std::cout<<"Fila vazia"<<std::endl;
        return;
    }
    else
    std::cout<<"Inicio: "<<inicio->dado<<std::endl;
}
int Fila::dequeue()
{
    if(filaVazia())
    {
        std::cout<<"Fila vazia"<<std::endl;
        return 0;
    }
    else 
    {
       int dado = inicio-> dado;
       No *temp = inicio;
       inicio = inicio-> proxNo;
       delete temp; 

       if(inicio == NULL)
          fim = NULL;
        return dado;  
    }
    qntElementos --;
}