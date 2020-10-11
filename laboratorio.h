#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"

class laboratorio
{
    Computadora arreglo[5];
    size_t cont;
public:
    laboratorio();
    void agregarComputadora(const Computadora &P);
    void mostrar();

};
#endif