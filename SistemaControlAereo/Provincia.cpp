#include "Provincia.h"
#include <string>

int Provincia::getId()
{
    return _id;
}

char* Provincia::getNombre()
{
    return _nombre;
}

int Provincia::getPaisId()
{
    return _paisId;
}

void Provincia::setId(int i)
{
    _id = i;
}

void Provincia::setNombre(char* n)
{
    strcpy(_nombre, n);
}

void Provincia::setPaisId(int i)
{
    _paisId = i;
}
bool Provincia::LeerDeDisco(int nroRegistro) {
    FILE* p = fopen("provincias.dat", "rb");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Provincia), SEEK_SET);
    bool ok = fread(this, sizeof(Provincia), 1, p);
    fclose(p);
    return ok;
}
bool Provincia::GuardarEnDisco() {
    FILE* p = fopen("provincias.dat", "ab");
    if (p == NULL) {
        return false;
    }
    bool guardo = fwrite(this, sizeof(Provincia), 1, p);
    fclose(p);
    return guardo;
}
bool Provincia::GuardarEnDisco(int nroRegistro) {
    FILE* p = fopen("provincias.dat", "rb+");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Provincia), SEEK_SET);
    bool guardo = fwrite(this, sizeof(Provincia), 1, p);
    fclose(p);
    return guardo;
}
