#include "Aerolinea.h"
#include <string>

int Aerolinea::getId()
{
    return _id;
}

char* Aerolinea::getNombre()
{
    return _nombre;
}

void Aerolinea::setId(int i)
{
    _id = i;
}

void Aerolinea::setNombre(char* n)
{
    strcpy(_nombre, n);
}

bool Aerolinea::LeerDeDisco(int nroRegistro) {
    FILE* p = fopen("aerolineas.dat", "rb");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Aerolinea), SEEK_SET);
    bool ok = fread(this, sizeof(Aerolinea), 1, p);
    fclose(p);
    return ok;
}
bool Aerolinea::GuardarEnDisco() {
    FILE* p = fopen("aerolineas.dat", "ab");
    if (p == NULL) {
        return false;
    }
    bool guardo = fwrite(this, sizeof(Aerolinea), 1, p);
    fclose(p);
    return guardo;
}
bool Aerolinea::GuardarEnDisco(int nroRegistro) {
    FILE* p = fopen("aerolineas.dat", "rb+");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Aerolinea), SEEK_SET);
    bool guardo = fwrite(this, sizeof(Aerolinea), 1, p);
    fclose(p);
    return guardo;
}
