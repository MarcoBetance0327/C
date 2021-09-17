//Implementacio de la clase DiaAnio

class DiaAnio{
	//Atributos
	private:
		int dia, mes;
		
	//Metodos
	public:
		DiaAnio(int _dia, int _mes){
			dia = _dia;
			mes = _mes;
		}
		
		bool igual(DiaAnio& d);
		void visualizar();
};
