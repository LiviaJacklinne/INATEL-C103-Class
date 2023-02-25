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
	no *cabeca;// n�o � temporaria, variavel menbro
	no *cauda;// variavel membro
	
	//fun��o para remover elemento unico
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

	//fun�a� para devolver quantidade de elementos
	int devolverTotalElementos();
	
	//fun�o que verifica se a lista esta vazia
	bool listaVazia();
	
	//fun��o para inserir no fim
	void inseroNoFim(int dado);

	//Fun��o para remover no fim
	void removerFim();
	
	//fun��o inserir inicio
	void inserirInicio(int dado);

	
	//fun��o para remover inicio
	void removeInicio();
	
	//Fun��o para ler a lista, mostrar os dados
	void percorrerLista();
	
};