#include "grafo1.hpp"
#include <iostream>

Grafo::Grafo(bool digrafo, int numVertices)
{
    this-> digrafo = digrafo;
    this-> numVertices = numVertices;
    this-> listaAdj.resize(this->numVertices);  
}

bool Grafo::inserirAresta(int origem, int destino)
{
    if(origem < 0 || origem >= this-> numVertices)
       return false;
    if(destino < 0 || destino >= this->numVertices)
       return false;
    this-> listaAdj.at(origem).push_back(destino);
    return true;
}

bool Grafo::removeAresta(int origem, int destino, bool inverteAresta)
{
    return false;
}

bool Grafo::removerAresta(int origem, int destino)
{
    return false;
}

void Grafo::mostraAresta()
{
    for(int i=0; i<listaAdj.size(); i++)// no lugar de listaAdj, poderia usar numVertices
    {
        for(int j=0; j<listaAdj.at(i).size();j++)
        {
            cout<<"Aresta origem: "<<i
            <<" Aresta destino: "<<listaAdj.at(i).at(j)<<endl;
        }
    }
}


