#pragma once
class Provincia
{
	private:
		int _id;
		char* _nombre;
		int _paisId;

	public:
		int getId();
		char* getNombre();
		int getPaisId();
		void setId(int i);
		void setNombre(char* n);
		void setPaisId(int i);
		bool LeerDeDisco(int nroRegistro);
		bool GuardarEnDisco();
		bool GuardarEnDisco(int nroRegistro);
};

