#include <iomanip>

struct No
{
    int dado;
    No *proxNo;
};
class Pilha
{
    private:
      No *topo;
      int qntElementos;
    public:
      //Construtor
      Pilha();
      //Função para colocar no topo
      void push (int dado);
      //Função mostrar topo
      void lerTopo();  
      //Verifica se a pilha esta vazia
      bool pilhaVazia(); /*pilha esta vazia?*/
};