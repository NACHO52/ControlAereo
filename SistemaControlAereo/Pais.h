#pragma once
class Pais
{
	private:
		int _id;
		char* _nombre;
		int _continenteId;

	public:
		int getId();
		char* getNombre();
		int getContinenteId();
		void setId(int i);
		void setNombre(char* n);
		void setContinenteId(int i);
		bool LeerDeDisco(int nroRegistro);
		bool GuardarEnDisco();
		bool GuardarEnDisco(int nroRegistro);
};