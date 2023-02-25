#include <iostream>
#include "ListaDupla.hpp"

using namespace std;

int main(){

    ListaDupla listaDupla;

    listaDupla.inserirNoFim(13);
    listaDupla.inserirNoFim(23);
    listaDupla.inserirNoFim(9);
    listaDupla.inserirNoFim(7);

    cout << "Percorrendo pelo inicio" <<endl;
    listaDupla.percorrerDoInicio();
    cout << "Percorrendo pelo fim" <<endl;
    listaDupla.percorrerDoFim();

    listaDupla.removerDoFim();

    cout << "Elemento removido" <<endl;

    cout << "Percorrendo pelo inicio" <<endl;
    listaDupla.percorrerDoInicio();
    cout << "Percorrendo pelo fim" <<endl;
    listaDupla.percorrerDoFim();

    return 0;
}