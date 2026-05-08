#include <iostream>
#include "../models/Producto.h" //salir de la carpeta e ir a models
#include "ProductoService.h"
using namespace std;
// Declarar mis variables globales
const int MAX_PRODUCTOS = 10;
Producto productos[MAX_PRODUCTOS];
int totalProductos = 0;
// Finciones de mi servicio
//CRUD
//Create
void ProductoService::agregarProducto(){
    //validar que no se pase del limite
    if(totalProductos >= MAX_PRODUCTOS){
        cout << "No se pueden agregar mas productos, limite alcanzado." << endl;
        return;
    }


//Pedir los datos del producto
//Agregar el producto al arreglo de objetos
cout << "--Registrar Producto--" << endl;
//pedir id
cout << "ID: ";
cin >> productos[totalProductos].id;
//pedir nombre
cin.ignore(); //limpiar el buffer
cout << "Nombre: ";
getline(cin, productos[totalProductos].nombre);
//pedir precio
cout << "Precio: ";
cin >> productos[totalProductos].precio;
//pedir fecha de caducidad
cout << "Fecha de Caducidad: ";
//anio
//mes
//dia
cout << "Anio: ";
cin >> productos[totalProductos].fechaCaducidad.anio;
//mes
cout << "Mes: ";
cin >> productos[totalProductos].fechaCaducidad.mes;
//dia
cout << "Dia: ";
cin >> productos[totalProductos].fechaCaducidad.dia;
//incrementar el total de productos
totalProductos++;
cout << "Producto agregado exitosamente." << endl;
}
//Read All
void ProductoService::mostrarProductos(){
    
}