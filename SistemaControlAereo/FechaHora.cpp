#include "FechaHora.h"
#include <ctime>

FechaHora::FechaHora()
{
    time_t rawtime;
    struct tm timeinfo;

    time(&rawtime);
    timeinfo = *(localtime(&rawtime));

    _dia = timeinfo.tm_mday;
    _mes = timeinfo.tm_mon + 1;
    _anio = timeinfo.tm_year + 1900;
    _hora = 0;
    _minutos = 0;
}

FechaHora::FechaHora(int dia, int mes, int anio, int hora, int minutos)
{
    _dia = dia;
    _mes = mes;
    _anio = anio;
    _hora = hora;
    _minutos = minutos;
}

int FechaHora::getDia()
{
    return _dia;
}

int FechaHora::getMes()
{
    return _mes;
}

int FechaHora::getAnio()
{
    return _anio;
}

int FechaHora::getHora()
{
    return _hora;
}

int FechaHora::getMinutos()
{
    return _minutos;
}

void FechaHora::setDia(int d)
{
    _dia = d;
}

void FechaHora::setMes(int m)
{
    _mes = m;
}

void FechaHora::setAnio(int a)
{
    _anio = a;
}

void FechaHora::setHora(int h)
{
    _hora = h;
}

void FechaHora::setMinutos(int m)
{
    _minutos = m;
}

std::string FechaHora::toString() {
    std::string fecha;
    fecha = std::to_string(_dia) + "/" + std::to_string(_mes) + "/" + std::to_string(_anio) + " " + std::to_string(_hora) + ":" + std::to_string(_minutos);
    return fecha;
}