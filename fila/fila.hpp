struct No
{
    int dado;
    No *proxNo;
};

class Fila
{
    private: 
       No *inicio;
       No *fim;
       int qntElementos;
    public:
       //Construtor
       Fila();
       //Verifica se esta vazia
       bool filaVazia();
       //Verifica quantidade de elementos
       int mostraQntElementos();
       //Mostra elementos da fila
       void mostrarInicio();
       //Coloca elemento no fim da fila
       void enqueue(int dado);
       //Remove do inicio
       int dequeue();
};