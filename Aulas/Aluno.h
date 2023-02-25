//.h responsavel pelas funções "o que fazer"
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
    	
    	//funçoes para ler
    	string lerNome();
    	int lerMat();
    	int lerNpa();
    	
    	//funções para inserir
    	void inserirNome(string);
    	void inserirMat(int);
    	void inserirNpa(int);  	
};