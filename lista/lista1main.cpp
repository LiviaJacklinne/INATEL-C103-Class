#include <iostream>
#include "lista1.hpp"

using namespace std;

int main()
{
    ListaEncadeada lista;

    cout<<"Inserir no fim"<<endl;
    lista.inserirFim(2);
    lista.inserirFim(3);
    lista.lerLista();
    cout<<"Inserir inicio"<<endl;
    lista.inserirInicio(1);
    lista.lerLista();
    cout<<"Remover fim"<<endl;
    lista.removerFim();
    lista.lerLista();
    cout<<"Remover inicio"<<endl;
    lista.removerInicio();
    lista.lerLista();

    return 0;
}