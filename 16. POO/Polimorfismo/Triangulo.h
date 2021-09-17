#include <iostream>
#include <math.h>
#include "Poligono.h"
using namespace std;

class Triangulo : public Poligono{
	private:
		float l1,l2,l3;
	public:
		Triangulo(float l1, float l2, float l3){
			this->l1 = l1;
			this->l2 = l2;
			this->l3 = l3;
		}
		
		float perimetro(){
			float per = (l1+l2+l3);
			return per;
		}
		
		float area(){
			float s = (l1+l2+l3)/2;
			float areaT = sqrt(s*(s-l1)*(s-l2)*(s-l3));
			return areaT;
		}
};
