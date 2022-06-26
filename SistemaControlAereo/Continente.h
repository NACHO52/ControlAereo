#pragma once
class Continente
{
	private:
		int _id;
		char _nombre[30];
	
	public:
		int getId();
		char* getNombre();
		void setId(int i);
		void setNombre(char* n);
		bool LeerDeDisco(int nroRegistro);
		bool GuardarEnDisco();
		bool GuardarEnDisco(int nroRegistro);
};