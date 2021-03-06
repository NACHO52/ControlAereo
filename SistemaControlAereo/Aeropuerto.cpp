#include "Aeropuerto.h"
#include <string>
#include <iostream>

int Aeropuerto::getId()
{
	return _id;
}

char* Aeropuerto::getNombre()
{
	return _nombre;
}

int Aeropuerto::getCiudadId()
{
	return _ciudadId;
}

int Aeropuerto::getCapacidad()
{
	return _capacidad;
}

int Aeropuerto::getCantidadAviones()
{
	return _cantidadAviones;
}

void Aeropuerto::setId(int i)
{
	_id = i;
}

void Aeropuerto::setNombre(char* n)
{
	strcpy(_nombre, n);
}

void Aeropuerto::setCapacidad(int i)
{
	_capacidad = i;
}

void Aeropuerto::setCantidadAviones(int c)
{
	_cantidadAviones = c;
}

bool Aeropuerto::LeerDeDisco(int nroRegistro) {
    FILE* p = fopen("aeropuertos.dat", "rb");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Aeropuerto), SEEK_SET);
    bool ok = fread(this, sizeof(Aeropuerto), 1, p);
    fclose(p);
    return ok;
}
bool Aeropuerto::GuardarEnDisco() {
    FILE* p = fopen("aeropuertos.dat", "ab");
    if (p == NULL) {
        return false;
    }
    bool guardo = fwrite(this, sizeof(Aeropuerto), 1, p);
    fclose(p);
    return guardo;
}
bool Aeropuerto::GuardarEnDisco(int nroRegistro) {
    FILE* p = fopen("aeropuertos.dat", "rb+");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Aeropuerto), SEEK_SET);
    bool guardo = fwrite(this, sizeof(Aeropuerto), 1, p);
    fclose(p);
    return guardo;
}

void MenuAeropuerto()
{
	int opcion;
	while (true)
	{
		system("cls");
		std::cout << "Menu Clientes" << std::endl;
		std::cout << "1 - CREAR" << std::endl;
		std::cout << "2 - EDITAR" << std::endl;
		std::cout << "3 - ELIMINAR" << std::endl;
		std::cout << "4 - LISTAR" << std::endl;
		std::cout << "0 - VOLVER" << std::endl;
		std::cout << "OPCION: " << std::endl;
		std::cin >> opcion;
		switch (opcion)
		{
		case 1: 

			break;
		case 2: 

			break;
		case 3: 

			break;
		case 4:

			break;
		case 0: 
			return;
		default: 
			std::cout << "Opcion incorrecta. Presione una tecla para continuar";
			system("pause>null");
			break;
		}
	}
}
