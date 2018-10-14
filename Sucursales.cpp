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
<<<<<<< HEAD

    ss << "Id de la Sucursal: " << id << "\n";
    ss << "Ubicación de la Sucursal: " << ubicacion << "\n";

    return ss.str();
}

void Sucursales::addSection(Section var)
{
  list_ofSections.push_back(var);
}

void Sucursales::deleteSection(short int var)
{
  list<Section>::iterator it = list_ofSections.begin();

  for(it = list_ofSections.begin(); it != list_ofSections.end(); it++)
  {
      Section aux = *it;
      if(aux.get_number() == var)
      {
          it = list_ofSections.erase(it);
      }
  }
}

string Sucursales::toString_Section(short int var)
{
    bool flag = false;
    stringstream ss;
    list<Section>::iterator it = list_ofSections.begin();

    for(it = list_ofSections.begin(); it != list_ofSections.end(); it++)
    {
        Section aux = *it;
        if(aux.get_number() == var)
        {
            ss << aux.toString() << '\n';
            flag = true;
        }
    }
    if(flag == false) ss << "Producto no encontrado\n";

    return ss.str();
}
=======
    
    ss << "Id de la Sucursal: " << id << "\n";
    ss << "Ubicación de la Sucursal: " << ubicacion << "\n";
    
    return ss.str();
}
>>>>>>> 10c841cf9d1bb1365e6abda1503ec2c6a195dae5
