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
#include <Section.h>

using namespace std;

class Sucursales
{
private:

    short int id;
    string ubicacion;
    list<Section> list_ofSections;

public:

    void set_id (short int);
    void set_ubicacion (string);

    short int get_id();
    string get_ubicacion();

    //Metodos propios de la clase Sucursal
    void addSection(Section);
    void deleteSection(short int);
    string toString_Section(short int);
    string toString_AllSections();
    string toString_AllSectionsMin(); //Solo imprime la cabezera de cada sección (sin los productos)

    //Metodos arrastrados de otras clases
    void addProducto(short int, Producto); //El primer numero entero es el num de sección
    void deleteProducto(short int, short int);
    string toString_Producto(short int, short int);

    Sucursales();
    Sucursales(short int, string);
    ~Sucursales(){};

    string toString();
};

#endif /* Sucursales_hpp */
