#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <sstream>

class Producto
{
    public:
    
    short int id;
    std::string nombre;
    float precio_venta;
    
    Producto();
    Producto(short int, std::string, float);
    ~Producto(){};
    
    std::string toString();
};

#endif