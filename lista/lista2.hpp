#include <iostream>

//Aqruivo o que fazer
struct no
{
	int dado;
	no *proxNo;
};

class listaEncadeada
{
private:
	int totalElementos;
	no *cabeca;// não é temporaria, variavel menbro
	no *cauda;// variavel membro
	
	//função para remover elemento unico
	void removeElementoUnico()
	{
		no *temp = cabeca;
		delete temp;
		cabeca = NULL;
		cauda = NULL;
	}

   public:
	 //construtor
	 listaEncadeada();

	 //funçaõ para devolver quantidade de elementos
	 int devolverTotalElementos();
	
	 //funão que verifica se a lista esta vazia
	 bool listaVazia();
	
	 //função para inserir no fim
	 void inseroNoFim(int dado);

	 //Função para remover no fim
	 void removerFim();
	
	 //função inserir inicio
	 void inserirInicio(int dado);

	
	 //função para remover inicio
	 void removeInicio();
	
	 //Função para ler a lista, mostrar os dados
	 void percorrerLista();
	
};