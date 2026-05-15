#ifndef PRODUCTOSERVICE_H
#define PRODUCTOSERVICE_H
#include "../models/Producto.h"
#include <vector>
using namespace std;
class ProductoService{
    public:
    static void agregarProducto(vector<Producto>& productos); //Create
    static void mostrarProductos(const vector<Producto>& productos); //Read
    static void eliminarProducto(vector<Producto>& productos, int id); //delete
};

#endif // PRODUCTOSERVICE_H