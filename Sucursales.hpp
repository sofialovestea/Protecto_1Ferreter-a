//
//  Sucursales.hpp
//  Ferretería - Proyecto
//
//  Created by Sofia Aguilar on 26/9/18.
//  Copyright © 2018 Sofia Aguilar. All rights reserved.
//

#ifndef Sucursales_hpp
#define Sucursales_hpp

#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;

class Sucursales
{
private:
    
    short int id;
    string ubicacion;
    
public:
    
    void set_id (short int);
    void set_ubicacion (string);
    
    short int get_id();
    string get_ubicacion();
    
    Sucursales();
    Sucursales(short int, string);
    ~Sucursales(){};
    
    string toString();
};

#endif /* Sucursales_hpp */
