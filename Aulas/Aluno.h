//.h responsavel pelas fun��es "o que fazer"
#include <iostream>
using namespace std;

class Aluno
{
	private:
		
		string nome;
		int mat;
		int npa;
    public:
    	//construtor
    	Aluno(string,int,int);
    	
    	//fun�oes para ler
    	string lerNome();
    	int lerMat();
    	int lerNpa();
    	
    	//fun��es para inserir
    	void inserirNome(string);
    	void inserirMat(int);
    	void inserirNpa(int);  	
};