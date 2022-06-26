#pragma once
class Ciudad
{
	private:
		int _id;
		char* _nombre;
		int _provinciaId;

	public:
		int getId();
		char* getNombre();
		int getProvinciaId();
		void setId(int i);
		void setNombre(char* n);
		void setProvinciaId(int i);
		bool LeerDeDisco(int nroRegistro);
		bool GuardarEnDisco();
		bool GuardarEnDisco(int nroRegistro);
};