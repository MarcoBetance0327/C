#include <iostream>
#include "Vehiculo.h"
using namespace std;

class Turismo : public Vehiculo{
	private:
		int numPuertas;
	public:
		Turismo(string marca, string color, string modelo, int numPuertas) : Vehiculo(marca,color,modelo){
			this->numPuertas = numPuertas;		
		}
		
		~Turismo(){
			
		}
		
		int getNumeroPuertas(){
			return numPuertas;
		}
		
		string retornarModelo(){
			string mensaje = getModelo();
			return mensaje;
		}
};
