#include <iostream>

struct No //OBS: "No" é um tipo, assim como int, dublle...
{
    int dado;
    No *proxNo;
};

class ListaEncadeada
{
    private:
        int numElementos; 
        No *cabeca;
        No *cauda;
        void removerElementoUnico()
        {
            No *temp = cabeca;
            delete temp;
            cabeca = NULL;
            cauda = NULL;
        }
    public:
        //construtor
        ListaEncadeada(); 
        //Inserir elementos no fim
        void inserirFim(int dado);
        //Remover no fim
        void removerFim();
        //Inserir elementos no começo
        void inserirInicio(int dado);
        //Remover no inicio
        void removerInicio();
        //Verificar se a lista ta vazia
        bool listaVazia();
        //Contar quantos elementos tem na lista
        int contarNumElementos();
        //Ler a lista
        void lerLista();
};