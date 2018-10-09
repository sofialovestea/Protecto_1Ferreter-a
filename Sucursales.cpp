//
//  Sucursales.cpp
//  Ferretería - Proyecto
//
//  Created by Sofia Aguilar on 26/9/18.
//  Copyright © 2018 Sofia Aguilar. All rights reserved.
//

#include "Sucursales.hpp"

Sucursales::Sucursales()
{
    id = 0;
    ubicacion = "UNKOWN";
}

void Sucursales::set_id(short int var){ id = var; }
void Sucursales::set_ubicacion(string var){ ubicacion = var; }

short int Sucursales::get_id(){ return id;}
string Sucursales::get_ubicacion(){ return ubicacion; }

Sucursales::Sucursales (short int var_1, string var_2)
{
    id = var_1;
    ubicacion = var_2;
}

string Sucursales::toString()
{
    stringstream ss;
    
    ss << "Id de la Sucursal: " << id << "\n";
    ss << "Ubicación de la Sucursal: " << ubicacion << "\n";
    
    return ss.str();
}