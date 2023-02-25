#include <iostream>
#include "Pilha.hpp"
using namespace std;

int main()
{
    Pilha pilha1;

    pilha1.push(9);
    cout<<"Mostrando o topo"<<endl;
    pilha1.lerTopo();

    return 0;
}