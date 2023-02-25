#include <iostream>
using namespace std;

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
	listaEncadeada()
	{
		cabeca = NULL;
		cauda = NULL;
		totalElementos = 0;
	}

	//fun�a� para devolver quantidade de elementos
	int devolverTotalElementos()
	{
		return this-> totalElementos;
	}

	//fun�o que verifica se a lista esta vazia
	bool listaVazia()
	{
		if (totalElementos == 0)
			return true; //lista vazia
		else return false;
	}

	//fun��o para inserir no fim
	void inseroNoFim(int dado)
	{
		//n� encadeado
		//temp � uma variavel que aponta para o endere�o do ultimo elemento
		no *temp = new no; // temp � uma variavel temporaria
		temp->dado = dado;
		temp->proxNo = NULL;


		//verifica se a lista esta vazia
		if(listaVazia())
		{
			//se estiver vazia
			cabeca = temp;
			cauda = temp;

		}
		else //se n�o estiver vazia
		{
			cauda->proxNo = temp;
			cauda = temp;
		}

		totalElementos++;
	}
	
	//Fun��o para remover no fim
	void removerFim()
	{
		if(listaVazia())
			return;
		if (totalElementos == 1)
			removeElementoUnico();
		else 
		{
			no *temp = cabeca;
			while(temp->proxNo != cauda)
			{
				temp = temp-> proxNo;
			}
			cauda = temp;
			delete temp->proxNo;
			cauda->proxNo = NULL;
		}
		totalElementos --;
	}
	
	//fun��o inserir inicio
	void inserirInicio(int dado)
	{
		no *temp = new no;
		temp ->dado = dado;
		if(listaVazia())
		{
			cabeca = temp;
			cauda = temp;
			cabeca->proxNo = NULL;			
		}
		else
		{
			temp->proxNo = cabeca;
			cabeca = temp;
		}
		totalElementos ++;
	}
	
	//fun��o para remover inicio
	void removeInicio()
	{
		if(listaVazia())
			return;
		if(totalElementos == 1)
			removeElementoUnico();
		else
		{
			no *temp = cabeca;
			cabeca = cabeca->proxNo;
			delete temp;
		}
		totalElementos --;
	}
	
	//Fun��o para ler a lista, mostrar os dados
	void percorrerLista()
	{
		if(listaVazia())
			cout<<"Lista Vazia"<<endl;
		else
		{
			//temp aponta para cabe�a, copia o endere�o da cabe�a
			//cabe�a � onde a lista come�a
			no *temp = cabeca;
			while(temp != cauda->proxNo)
			//se temp = cauda-> proxNo, o while continua
			//qnd temp = NULL, while para. A cauda do ultimo elemento aponta para NULL
			{
				cout<< temp->dado <<endl;
				temp = temp->proxNo; 
			}
		}
	}
	



};
int main()
{
	listaEncadeada lista;
	
	cout<<"Iserir no fim"<<endl;
	lista.inseroNoFim(2);
	lista.inseroNoFim(3);
	lista.inseroNoFim(4);
	lista.percorrerLista();
	cout<<"Iserir no inicio"<<endl;
	lista.inserirInicio(1);
	lista.percorrerLista();
	cout<<"Remover fim"<<endl;
	lista.removerFim();
	lista.percorrerLista();
	cout<<"Remover inicio"<<endl;
	lista.removeInicio();
	lista.percorrerLista();

/*  cout << lista.devolverTotalElementos() << endl;
	cout << lista.listaVazia() << endl; //a lista esta vazia? 0 = F, 1 = V
*/
	return 0;
}
