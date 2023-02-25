#include "Aluno.h"
#include <iostream>
//Dar nome
using namespace std;

Aluno::Aluno(string nome, int mat, int npa)
{
	//como fazer
	this-> nome = nome;
	this-> mat =  mat;
	this-> npa = npa;
}

 int Aluno ::lerNpa()
 {
 	return this-> npa;
 }
 int Aluno::lerMat()
 {
 	return this-> mat;
 }
 string Aluno::lerNome()
 {
 	return this-> nome;
 }

