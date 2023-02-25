#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

class Coordenada
{
	private:
		float x,y;
    public:
    	//construtor
    	Coordenada(float px,float py)
    	{
			x = px;
			y = py;
		
		}
		void quadrante()
		{
			if(x > 0 && y > 0)
				cout<<"Quadrante 1"<<endl;
			else if(x > 0 && y < 0)
				cout<<"Quadrante 2"<<endl;
            else if(x < 0 && y < 0)
				cout<<"Quadrante 3"<<endl;
			else 
				cout<<"Quadrante 4"<<endl;
			//return 0;
		}
		 float lerPonto()
		 {
		 	
		 	cout<<"X = "<<x<<endl;
		 	return y;
		 }
};

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	Coordenada ponto1 (2,4);
	Coordenada ponto2 (3,6);

	cout<<"Y = "<<ponto1.lerPonto()<<endl;
	ponto1.quadrante();
	cout<<"Y = "<<ponto2.lerPonto()<<endl;
	
	return 0;
}