#include "Continente.h"
#include <string>

int Continente::getId()
{
    return _id;
}

char* Continente::getNombre()
{
    return _nombre;
}

void Continente::setId(int i)
{
    _id = i;
}

void Continente::setNombre(char* n)
{
    strcpy(_nombre, n);
}

bool Continente::LeerDeDisco(int nroRegistro) {
    FILE* p = fopen("continentes.dat", "rb");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Continente), SEEK_SET);
    bool ok = fread(this, sizeof(Continente), 1, p);
    fclose(p);
    return ok;
}
bool Continente::GuardarEnDisco() {
    FILE* p = fopen("continentes.dat", "ab");
    if (p == NULL) {
        return false;
    }
    bool guardo = fwrite(this, sizeof(Continente), 1, p);
    fclose(p);
    return guardo;
}
bool Continente::GuardarEnDisco(int nroRegistro) {
    FILE* p = fopen("continentes.dat", "rb+");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Continente), SEEK_SET);
    bool guardo = fwrite(this, sizeof(Continente), 1, p);
    fclose(p);
    return guardo;
}