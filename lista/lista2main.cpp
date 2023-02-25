#include <iostream>
#include "lista2.hpp"

using namespace std;

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

	return 0;
}
