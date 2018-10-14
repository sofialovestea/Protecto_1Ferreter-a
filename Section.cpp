//
//  Section.cpp
//  Ferretería - Proyecto
//
//  Created by Sofia Aguilar on 26/9/18.
//  Copyright © 2018 Sofia Aguilar. All rights reserved.
//

#include "Section.hpp"


Section::Section(short int var_1, string var_2)
{
    number = var_1;
    description = var_2;
}

Section::Section(short int var_1, string var_2, list<Producto> var_3)
{
    number = var_1;
    description = var_2;
    list_ofProductos = var_3;
}

Section::~Section()
{
    
}

void Section::set_number(short int var){ number = var; }
void Section::set_description(string var){ description = var; }
void Section::set_list_ofProductos(list<Producto> var){ list_ofProductos = var; }

short int Section::get_number(){ return number; }
string Section::get_description() { return description; }
list<Producto> Section::get_list_ofProductos(){ return list_ofProductos; }

void Section::addProducto(Producto var)
{
    list_ofProductos.push_back(var);
}

void Section::deleteProducto(short int var)
{
    list<Producto>::iterator it = list_ofProductos.begin();
    
    for(it = list_ofProductos.begin(); it != list_ofProductos.end(); it++)
    {
        Producto aux = *it;
        if(aux.get_id() == var)
        {
            it = list_ofProductos.erase(it);
        }
    }
}

Producto Section::findProducto(short int var)
{
    list<Producto>::iterator it = list_ofProductos.begin();
    Producto aux;
    
    for(it = list_ofProductos.begin(); it != list_ofProductos.end(); it++)
    {
        aux = *it;
        if(aux.get_id() == var)
        {
            break;
        }
    }
    
    return aux;
}

string Section::toStringProducto(short int var)
{
    stringstream ss;
    list<Producto>::iterator it = list_ofProductos.begin();
    
    for(it = list_ofProductos.begin(); it != list_ofProductos.end(); it++)
    {
        Producto aux = *it;
        if(aux.get_id() == var)
        {
            ss << aux.toString() << '\n';
        }
    }
    
    return ss.str();
}

string Section::toStringMin()
{
    stringstream ss;
    
    ss << "Sección de: " << description << "\n" << "Numero: " << number << "\n";
    
    return ss.str();
}

string Section::toString()
{
    stringstream ss;
    
    ss << "Sección de: " << description << "\n" << "Numero: " << number << "\n";
    
    list<Producto>::iterator it_out = list_ofProductos.begin();
    for(it_out = list_ofProductos.begin(); it_out != list_ofProductos.end(); it_out++)
    {
        Producto pivot = *it_out;
        ss << pivot.toString();
        ss << "\n";
    }
    
    
    return ss.str();
}