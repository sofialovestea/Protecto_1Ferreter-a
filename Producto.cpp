//
//  Producto.cpp
//  Ferretería - Proyecto
//
//  Created by Sofia Aguilar on 26/9/18.
//  Copyright © 2018 Sofia Aguilar. All rights reserved.
//

#include "Producto.hpp"
#include <iostream>
using namespace std;


Producto::Producto()
{
    id = 0;
    nombre = "UNKOWN";
    precio_venta = 0.0;
}

void Producto::set_id(short int var){ id = var; }
void Producto::set_nombre(string var){ nombre = var; }
void Producto::set_precio_venta(float var){ precio_venta = var; }

short int Producto::get_id(){ return id;}
string Producto::get_nombre(){ return nombre; }
float Producto::get_precio_venta(){ return precio_venta; }

Producto::Producto(short int var_1, string var_2, float var_3)
{
    id = var_1;
    nombre = var_2;
    precio_venta = var_3;
}

string Producto::toString()
{
    stringstream ss;
    
    ss << "Descripcion del Producto: " << nombre << "\n";
    ss << "Codigo del Producto: " << id << "\n";
    ss << "Precio: " << precio_venta << " ivi" << "\n";
    
    return ss.str();
}