//
//  Section.hpp
//  Ferretería - Proyecto
//
//  Created by Sofia Aguilar on 26/9/18.
//  Copyright © 2018 Sofia Aguilar. All rights reserved.
//

#ifndef Section_hpp
#define Section_hpp

#include <stdio.h>

#include "Producto.hpp"
#include <list>

using namespace std;

class Section
{
public:
    short int number;
    string description;
    list<Producto> list_ofProductos;
    
    void set_number(short int);
    void set_description(string);
    void set_list_ofProductos(list<Producto>);
    
    short int get_number();
    string get_description();
    list<Producto> get_list_ofProductos();
    
    Section();
    Section(short int, string);
    Section(short int, string, list<Producto>);
    ~Section();
    
    void addProducto(Producto);
    void deleteProducto(short int);
    Producto findProducto(short int);
    string toString(); //Imprime la Seccion con todo y sus productos
    string toStringProducto(short int);
    string toStringMin(); //Solo imprime numero y nombre de la seccion
};


#endif /* Section_hpp */
