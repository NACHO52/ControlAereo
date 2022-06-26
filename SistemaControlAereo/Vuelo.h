#pragma once
#include "FechaHora.h"

enum VueloEstado {
	Pendiente = 1,
	Cancelado = 2,
	Activo = 3,
	Finalizado = 4
};

class Vuelo
{
	private:
		int _id;
		char _codigo[6];
		int _avionId;
		int _aeropuertoSalidaId;
		int _aeropuertoDestinoId;
		FechaHora _fechaHoraSalida;
		FechaHora _fechaHoraLlegada;
		VueloEstado _estado;
	
	public:
		int getId();
		char* getCodigo();
		int getAvionId();
		int getAeropuertoSalidaId();
		int getAeropuertoDestinoId();
		FechaHora getFechaHoraSalida();
		FechaHora getFechaHoraLlegada();
		VueloEstado getEstado();
		void setId(int i);
		void setCodigo(char* c);
		void setAvionId(int i);
		void setAeropuertoSalidaId(int a);
		void setAeropuertoDetinoId(int a);
		void setFechaHoraSalida(FechaHora f);
		void setFechaHoraLlegada(FechaHora f);
		void setEstado(VueloEstado e);
		bool LeerDeDisco(int nroRegistro);
		bool GuardarEnDisco();
		bool GuardarEnDisco(int nroRegistro);
};

