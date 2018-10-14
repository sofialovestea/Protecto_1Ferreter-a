//
//  Producto.hpp
//  Ferretería - Proyecto
//
//  Created by Sofia Aguilar on 26/9/18.
//  Copyright © 2018 Sofia Aguilar. All rights reserved.
//

#ifndef Producto_hpp
#define Producto_hpp

#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;

class Producto
{
private:
    
    short int id;
    string nombre;
    float precio_venta;
    
public:
    
    void set_id(short int);
    void set_nombre(string);
    void set_precio_venta(float);
    
    short int get_id();
    string get_nombre();
    float get_precio_venta();
    
    Producto();
    Producto(short int, string, float);
    ~Producto(){};
    
    string toString();
};



#endif /* Producto_hpp */
