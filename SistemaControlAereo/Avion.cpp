#include "Avion.h"
#include <string>

int Avion::getId()
{
    return _id;
}

char* Avion::getCodigo()
{
    return _codigo;
}

int Avion::getCapacidad()
{
    return _capacidad;
}

int Avion::getCantidadPasajeros()
{
    return _cantidadPasajeros;
}

int Avion::getAerolineaId()
{
    return _aerolineaId;
}

int Avion::getPilotoId()
{
    return _pilotoId;
}

int Avion::getCopilotoId()
{
    return _copilotoId;
}

AvionEstado Avion::getEstado()
{
    return _estado;
}

void Avion::setId(int i)
{
    _id = i;
}

void Avion::setCodigo(char* c)
{
    strcpy(_codigo, c);
}

void Avion::setCapacidad(int i)
{
    _capacidad = i;
}

void Avion::setCantidadPasajeros(int c)
{
    _cantidadPasajeros = c;
}

void Avion::setAerolineaId(int i)
{
    _aerolineaId = i;
}

void Avion::setPilotoId(int p)
{
    _pilotoId = p;
}

void Avion::setCopilotoId(int c)
{
    _copilotoId = c;
}

void Avion::setEstado(AvionEstado e)
{
    _estado = e;
}

bool Avion::LeerDeDisco(int nroRegistro) {
    FILE* p = fopen("aviones.dat", "rb");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Avion), SEEK_SET);
    bool ok = fread(this, sizeof(Avion), 1, p);
    fclose(p);
    return ok;
}
bool Avion::GuardarEnDisco() {
    FILE* p = fopen("aviones.dat", "ab");
    if (p == NULL) {
        return false;
    }
    bool guardo = fwrite(this, sizeof(Avion), 1, p);
    fclose(p);
    return guardo;
}
bool Avion::GuardarEnDisco(int nroRegistro) {
    FILE* p = fopen("aviones.dat", "rb+");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Avion), SEEK_SET);
    bool guardo = fwrite(this, sizeof(Avion), 1, p);
    fclose(p);
    return guardo;
}