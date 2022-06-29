#pragma once
class Aeropuerto
{
	private:
		int _id;
		char _nombre[30];
		int _ciudadId;
		int _capacidad;
		int _cantidadAviones;

	public:
		int getId();
		char* getNombre();
		int getCiudadId();
		int getCapacidad();
		int getCantidadAviones();
		void setId(int i);
		void setNombre(char* n);
		void setCapacidad(int i);
		void setCantidadAviones(int c);
		bool LeerDeDisco(int nroRegistro);
		bool GuardarEnDisco();
		bool GuardarEnDisco(int nroRegistro);
};

//FUNCIONES GLOBALES

void MenuAeropuerto();