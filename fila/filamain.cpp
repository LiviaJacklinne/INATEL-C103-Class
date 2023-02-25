#include <iostream>
#include "fila.hpp"

using namespace std;
int main()
{
    Fila fila;
    
    cout<<"Enfileirando"<<endl;
    fila.enqueue(15);
    fila.mostrarInicio();
    cout<<"Enfileirar e Mostrar inicio"<<endl;
    fila.enqueue(3);
    fila.mostrarInicio();
    cout<<"Desenfileirar e Mostrar inicio"<<endl;
    fila.dequeue();
    fila.mostrarInicio();

    return 0;
}