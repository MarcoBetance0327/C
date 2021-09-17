#include <iostream>
#include "Animal.h"
using namespace std;

class AnimalCarnivoro : public Animal{
	public:
		void alimentarse(){
			cout<<"El carnivoro se alimenta de carne"<<endl;
		}
};
