#include <iostream>

using namespace std;

class Inimigo{
 private:
      string nome;
      double vida;
      void atacar()
      {
         cout << "Inimigo Atacando" << endl;
      }
 public:
     Inimigo(string nome, double vida)
     {
         this->nome = nome;
         this->vida = vida;
     }

     bool estouVivo()
     { 
         return vida >= 0;
     }
 };