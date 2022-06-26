#include "Vuelo.h"
#include <string>

int Vuelo::getId()
{
	return _id;
}

char* Vuelo::getCodigo()
{
	return _codigo;
}

int Vuelo::getAvionId()
{
	return _avionId;
}

int Vuelo::getAeropuertoSalidaId()
{
	return _aeropuertoSalidaId;
}

int Vuelo::getAeropuertoDestinoId()
{
	return _aeropuertoDestinoId;
}

FechaHora Vuelo::getFechaHoraSalida()
{
	return _fechaHoraSalida;
}

FechaHora Vuelo::getFechaHoraLlegada()
{
	return _fechaHoraLlegada;
}

VueloEstado Vuelo::getEstado()
{
	return _estado;
}

void Vuelo::setId(int i)
{
	_id = i;
}

void Vuelo::setCodigo(char* c)
{
	strcpy(_codigo, c);
}

void Vuelo::setAvionId(int i)
{
	_avionId = i;
}

void Vuelo::setAeropuertoSalidaId(int a)
{
	_aeropuertoSalidaId = a;
}

void Vuelo::setAeropuertoDetinoId(int a)
{
	_aeropuertoDestinoId = a;
}

void Vuelo::setFechaHoraSalida(FechaHora f)
{
	_fechaHoraSalida = f;
}

void Vuelo::setFechaHoraLlegada(FechaHora f)
{
	_fechaHoraLlegada = f;
}

void Vuelo::setEstado(VueloEstado e)
{
	_estado = e;
}

bool Vuelo::LeerDeDisco(int nroRegistro) {
    FILE* p = fopen("vuelos.dat", "rb");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Vuelo), SEEK_SET);
    bool ok = fread(this, sizeof(Vuelo), 1, p);
    fclose(p);
    return ok;
}
bool Vuelo::GuardarEnDisco() {
    FILE* p = fopen("vuelos.dat", "ab");
    if (p == NULL) {
        return false;
    }
    bool guardo = fwrite(this, sizeof(Vuelo), 1, p);
    fclose(p);
    return guardo;
}
bool Vuelo::GuardarEnDisco(int nroRegistro) {
    FILE* p = fopen("vuelos.dat", "rb+");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Vuelo), SEEK_SET);
    bool guardo = fwrite(this, sizeof(Vuelo), 1, p);
    fclose(p);
    return guardo;
}