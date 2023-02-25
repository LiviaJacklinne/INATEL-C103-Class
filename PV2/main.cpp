#include <iostream>

using namespace std;

class Inimigo{
 private:
      string nome;
      double vida;
      /*void atacar()
      {
         cout << "Inimigo Atacando" << endl;
      }*/
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
     void atacar()
      {
         cout << "Inimigo Atacando" << endl;
      }
 };

int main()
{

 Inimigo inimigo("Black Knight", 100);

 cout << inimigo.estouVivo()<<endl;
 //inimigo.atacar();
 return 0;
 }