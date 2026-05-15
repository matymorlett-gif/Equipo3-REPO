#include <iostream>
#include <vector>
#include "../models/Producto.h" //salir de la carpeta e ir a models
#include "ProductoService.h"
using namespace std;

/*
// Declarar mis variables globales
const int MAX_PRODUCTOS = 10;
Producto productos[MAX_PRODUCTOS];
int totalProductos = 0;
*/
// Funciones de mi servicio
//CRUD
//Create
void ProductoService::agregarProducto(vector<Producto>& productos){
    Producto nuevoProducto;
    //validar que no se pase del limite
    /*
    if(totalProductos >= MAX_PRODUCTOS){
        cout << "No se pueden agregar mas productos, limite alcanzado." << endl;
        return;
    }
    */


//Pedir los datos del producto
//Agregar el producto al arreglo de objetos
cout << "--Registrar Producto--" << endl;
//pedir id
cout << "ID: ";
cin >> nuevoProducto.id;
//pedir nombre
cin.ignore(); //limpiar el buffer
cout << "Nombre: ";
getline(cin, nuevoProducto.nombre);
//pedir precio
cout << "Precio: ";
cin >> nuevoProducto.precio;
//pedir fecha de caducidad
cout << "Fecha de Caducidad: ";
//anio
//mes
//dia
cout << "Anio: ";
cin >> nuevoProducto.fechaCaducidad.anio;
//mes
cout << "Mes: ";
cin >> nuevoProducto.fechaCaducidad.mes;
//dia
cout << "Dia: ";
cin >> nuevoProducto.fechaCaducidad.dia;
//incrementar el total de productos
/*
totalProductos++;
cout << "Producto agregado exitosamente." << endl;
}
*/
// agregar el producto al vector
productos.push_back(nuevoProducto);
cout << "Producto agregado exitosamente." << endl;
}

//Read All
void ProductoService::mostrarProductos(const vector<Producto>& productos){
    if (productos.empty()) {
        cout << "No hay productos registrados." << endl;
        return;
    }
    cout << "--Productos registrados--" << endl;
    for (int i=0; i<productos.size(); i++){
        cout << "Producto " << i + 1 << ":" << endl;
        cout << "  ID: " << productos[i].id << endl;
        cout << "  Nombre: " << productos[i].nombre << endl;
        cout << "  Precio: " << productos[i].precio << endl;
        cout << "  Fecha de Caducidad: " 
             << productos[i].fechaCaducidad.dia << "/"
             << productos[i].fechaCaducidad.mes << "/"
             << productos[i].fechaCaducidad.anio << endl;
        cout << "-----------------------" << endl;
    }
// Eliminar producto
void ProductoService::eliminarProducto(vector<Producto>& productos, int id){
        for (int i=0;i<productos.size(); i++){
            if (productos[i].id == id){
                productos.erase(productos.begin()+i);
                cout << "Producto eliminado exitosamente." << endl;
            }
        }
}