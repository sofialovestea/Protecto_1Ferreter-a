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
<<<<<<< HEAD
#include <Section.h>

=======
>>>>>>> 10c841cf9d1bb1365e6abda1503ec2c6a195dae5
using namespace std;

class Sucursales
{
private:
<<<<<<< HEAD

    short int id;
    string ubicacion;
    list<Section> list_ofSections;

public:

    void set_id (short int);
    void set_ubicacion (string);

    short int get_id();
    string get_ubicacion();

    void addSection(Section);
    void deleteSection(short int);
    string toString_Section(short int);
    string toString_AllSections();

    Sucursales();
    Sucursales(short int, string);
    ~Sucursales(){};

=======
    
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
    
>>>>>>> 10c841cf9d1bb1365e6abda1503ec2c6a195dae5
    string toString();
};

#endif /* Sucursales_hpp */
