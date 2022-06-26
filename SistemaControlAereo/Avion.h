#pragma once
enum AvionEstado {
	Disponible = 1,
	FueraDeServicio = 2,
	EnVuelo = 3
};

class Avion
{
	private:
		int _id;
		char _codigo[6];
		int _capacidad;
		int _cantidadPasajeros;
		int _aerolineaId;
		int _pilotoId;
		int _copilotoId;
		AvionEstado _estado;

	public:
		int getId();
		char* getCodigo();
		int getCapacidad();
		int getCantidadPasajeros();
		int getAerolineaId();
		int getPilotoId();
		int getCopilotoId();
		AvionEstado getEstado();
		void setId(int i);
		void setCodigo(char* c);
		void setCapacidad(int i);
		void setCantidadPasajeros(int c);
		void setAerolineaId(int i);
		void setPilotoId(int p);
		void setCopilotoId(int c);
		void setEstado(AvionEstado e);
		bool LeerDeDisco(int nroRegistro);
		bool GuardarEnDisco();
		bool GuardarEnDisco(int nroRegistro);
};