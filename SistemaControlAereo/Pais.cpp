#include "Pais.h"
#include <string>

int Pais::getId()
{
    return _id;
}

char* Pais::getNombre()
{
    return _nombre;
}

int Pais::getContinenteId()
{
    return _continenteId;
}

void Pais::setId(int i)
{
    _id = i;
}

void Pais::setNombre(char* n)
{
    strcpy(_nombre, n);
}

void Pais::setContinenteId(int i)
{
    _continenteId = i;
}

bool Pais::LeerDeDisco(int nroRegistro) {
    FILE* p = fopen("paises.dat", "rb");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Pais), SEEK_SET);
    bool ok = fread(this, sizeof(Pais), 1, p);
    fclose(p);
    return ok;
}
bool Pais::GuardarEnDisco() {
    FILE* p = fopen("paises.dat", "ab");
    if (p == NULL) {
        return false;
    }
    bool guardo = fwrite(this, sizeof(Pais), 1, p);
    fclose(p);
    return guardo;
}
bool Pais::GuardarEnDisco(int nroRegistro) {
    FILE* p = fopen("paises.dat", "rb+");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Pais), SEEK_SET);
    bool guardo = fwrite(this, sizeof(Pais), 1, p);
    fclose(p);
    return guardo;
}