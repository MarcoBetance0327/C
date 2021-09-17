#include <iostream>
using namespace std;

class Cuadrilatero{
	private:
		float lado1,lado2;
	
	public:
		Cuadrilatero(float lado1, float lado2){
			this->lado1 = lado1;
			this->lado2 = lado2;
		}
		Cuadrilatero(float lado){
			this->lado1 = this->lado2 = lado;
		}
		
		float obtenerPerimetro();
		float obtenerArea();
		
};
