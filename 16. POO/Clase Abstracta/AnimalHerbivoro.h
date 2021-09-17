#include <iostream>
#include "Animal.h"
using namespace std;

class AnimalHerbivoro : public Animal{
	public:
		void alimentarse(){
			cout<<"El Herbivoro se alimenta de plantas"<<endl;
		}
};
