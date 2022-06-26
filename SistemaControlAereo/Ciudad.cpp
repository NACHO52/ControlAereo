#include "Ciudad.h"
#include <string>

int Ciudad::getId()
{
    return _id;
}

char* Ciudad::getNombre()
{
    return _nombre;
}

int Ciudad::getProvinciaId()
{
    return _provinciaId;
}

void Ciudad::setId(int i)
{
    _id = i;
}

void Ciudad::setNombre(char* n)
{
    strcpy(_nombre, n);
}

void Ciudad::setProvinciaId(int i)
{
    _provinciaId = i;
}

bool Ciudad::LeerDeDisco(int nroRegistro) {
    FILE* p = fopen("ciudades.dat", "rb");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Ciudad), SEEK_SET);
    bool ok = fread(this, sizeof(Ciudad), 1, p);
    fclose(p);
    return ok;
}
bool Ciudad::GuardarEnDisco() {
    FILE* p = fopen("ciudades.dat", "ab");
    if (p == NULL) {
        return false;
    }
    bool guardo = fwrite(this, sizeof(Ciudad), 1, p);
    fclose(p);
    return guardo;
}
bool Ciudad::GuardarEnDisco(int nroRegistro) {
    FILE* p = fopen("ciudades.dat", "rb+");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Ciudad), SEEK_SET);
    bool guardo = fwrite(this, sizeof(Ciudad), 1, p);
    fclose(p);
    return guardo;
}