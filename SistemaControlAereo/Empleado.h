#pragma once
class Empleado
{
	private:
		int _id;
		char _nombre[20];
		char _apellido[20];
		char _identificacion[20];
	public:
		int getId();
		char* getNombre();
		char* getApellido();
		char* getIdentificacion();
		void setId(int i);
		void setNombre(char* n);
		void setApellido(char* a);
		void setIdentificacion(char *i);
		bool LeerDeDisco(int nroRegistro);
		bool GuardarEnDisco();
		bool GuardarEnDisco(int nroRegistro);
};

