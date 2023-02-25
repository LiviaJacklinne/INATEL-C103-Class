//Dados que sera salvo na Lista Duplamente Encadeada
struct No{
    int dado;
    No* proxNo;
    No* antesNo;
};

class ListaDupla{

    private:
        No* cabeca;
        No* cauda;
        int qtdElemento;
        void removeElementoUnico();
    public:
        ListaDupla();

        //inserirNoFim
        void inserirNoFim(int dado);
        
        //remover do Fim
        void removerDoFim();

        //percorrer a lista comecando pelo primeiro elemento
        void percorrerDoInicio();

        //percorrer a lista comecando pelo ultimo elemento
        void percorrerDoFim();        

        //verifica se a lista esta vazia
        bool listaVazia();

};