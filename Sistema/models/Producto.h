#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include "Fecha.h"
using namespace std;
struct Producto
{
    int id;
    string nombre;
    int precio;
    Fecha fechaCaducidad;
};
#endif // PRODUCTO_H