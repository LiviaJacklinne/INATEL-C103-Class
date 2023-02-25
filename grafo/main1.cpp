#include "grafo1.hpp"
#include <iostream>
#include <vector> // lista encadeada que o C++ disponibiliza

using namespace std;

int main ()
{ 
    Grafo grafo1(true,5);

    grafo1.inserirAresta(2,4);
    grafo1.inserirAresta(1,3);
    grafo1.mostraAresta();

    return 0;
}