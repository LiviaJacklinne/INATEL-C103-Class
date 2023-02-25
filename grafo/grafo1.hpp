#include <vector>

using namespace std;

class Grafo
{
    private:
        bool digrafo; // é um digrafo?
        int numVertices; // ordem do grafo
        vector<vector<int> > listaAdj; // lista adjacente, cada posição é endereço para outro vetor
        bool removeAresta(int,int,bool);
    public:
        Grafo(bool digrafo, int numVertices);
        bool inserirAresta (int origem, int destino);
        bool removerAresta (int origem, int destino);
        void mostraAresta();   
};