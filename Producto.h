#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <sstream>

class Producto
{
    private:
    
    short int id;
    std::string nombre;
    float precio_venta;
    
    public:
    
    void set_id(short int);
    void set_nombre(std::string);
    void set_precio_venta(float);
    
    short int get_id();
    std::string get_nombre();
    float get_precio_venta();
    
    Producto();
    Producto(short int, std::string, float);
    ~Producto(){};
    
    std::string toString();
};

#endif