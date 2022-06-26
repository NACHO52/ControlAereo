#pragma once
#include <string>
class FechaHora
{
	private:
		int _dia;
		int _mes;
		int _anio;
		int _hora;
		int _minutos;
	
	public:
		FechaHora();
		FechaHora(int dia, int mes, int anio, int hora, int minutos);

		int getDia();
		int getMes();
		int getAnio();
		int getHora();
		int getMinutos();
		void setDia(int d);
		void setMes(int m);
		void setAnio(int a);
		void setHora(int h);
		void setMinutos(int m);
		std::string toString();
		
};