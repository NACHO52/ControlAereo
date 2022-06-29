#include <iostream>
#include "Aeropuerto.h"

using namespace std;


void GenerarArchivos();

int main()
{
	int opcion = 1;
	GenerarArchivos();
	while (true)
	{
		system("cls");
		cout << "Menu Principal" << endl;
		cout << "1 _ UBICACIONES" << endl;
		cout << "2 _ AEROPUERTOS" << endl;
		cout << "3 _ AEROLINEAS" << endl;
		cout << "4 _ EMPLEADOS" << endl;
		cout << "5 _ AVIONES" << endl;
		cout << "6 _ VUELOS" << endl;
		cout << "0 _ SALIR" << endl;

		cout << endl;
		cout << "OPCION: " << endl;
		cin >> opcion;

		switch (opcion)
		{
		case 0:
			return 0;
		case 1:
			break;
		case 2:
			MenuAeropuerto();
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		default:
			break;
		}
	}
	return 0;
}


void GenerarArchivos()
{
	FILE* p;

	p = fopen("aerolineas.dat", "rb");
	if (p == NULL)
		p = fopen("aerolineas.dat", "wb");
	fclose(p);

	p = fopen("aeropuertos.dat", "rb");
	if (p == NULL)
		p = fopen("aeropuertos.dat", "wb");
	fclose(p);

	p = fopen("aviones.dat", "rb");
	if (p == NULL)
		p = fopen("aviones.dat", "wb");
	fclose(p);

	p = fopen("ciudades.dat", "rb");
	if (p == NULL)
		p = fopen("ciudades.dat", "wb");
	fclose(p);

	p = fopen("continentes.dat", "rb");
	if (p == NULL)
		p = fopen("continentes.dat", "wb");
	fclose(p);

	p = fopen("empleados.dat", "rb");
	if (p == NULL)
		p = fopen("empleados.dat", "wb");
	fclose(p);

	p = fopen("paises.dat", "rb");
	if (p == NULL)
		p = fopen("paises.dat", "wb");
	fclose(p);

	p = fopen("provincias.dat", "rb");
	if (p == NULL)
		p = fopen("provincias.dat", "wb");
	fclose(p);

	p = fopen("vuelos.dat", "rb");
	if (p == NULL)
		p = fopen("vuelos.dat", "wb");
	fclose(p);
}