#include "Empleado.h"
#include <string>

int Empleado::getId()
{
    return _id;
}

char* Empleado::getNombre()
{
    return _nombre;
}

char* Empleado::getApellido()
{
    return _apellido;
}

char* Empleado::getIdentificacion()
{
    return _identificacion;
}

void Empleado::setId(int i)
{
    _id = i;
}

void Empleado::setNombre(char* n)
{
    strcpy(_nombre, n);
}

void Empleado::setApellido(char* a)
{
    strcpy(_apellido, a);
}

void Empleado::setIdentificacion(char* i)
{
    strcpy(_identificacion, i);
}
bool Empleado::LeerDeDisco(int nroRegistro) {
    FILE* p = fopen("empleados.dat", "rb");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Empleado), SEEK_SET);
    bool ok = fread(this, sizeof(Empleado), 1, p);
    fclose(p);
    return ok;
}
bool Empleado::GuardarEnDisco() {
    FILE* p = fopen("empleados.dat", "ab");
    if (p == NULL) {
        return false;
    }
    bool guardo = fwrite(this, sizeof(Empleado), 1, p);
    fclose(p);
    return guardo;
}
bool Empleado::GuardarEnDisco(int nroRegistro) {
    FILE* p = fopen("empleados.dat", "rb+");
    if (p == NULL) {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Empleado), SEEK_SET);
    bool guardo = fwrite(this, sizeof(Empleado), 1, p);
    fclose(p);
    return guardo;
}
