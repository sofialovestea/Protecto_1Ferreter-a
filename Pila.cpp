//
//  Pila.cpp
//  Ferretería - Proyecto
//
//  Created by Sofia Aguilar on 8/10/18.
//  Copyright © 2018 Sofia Aguilar. All rights reserved.
//

#include "Pila.hpp"

Pila_Producto::Pila_Producto()
{

}

void Pila_Producto:: push(Producto p)
{
    nodo *nuevo=new nodo();
    nuevo->_producto=p;
    nuevo->sgte=primero;
    primero=nuevo;

}


bool Pila_Producto::PilaVacia()
{
    if(primero == NULL)
    {
        return true;
    }else
    {
        return false;
    }
}
Producto Pila_Producto:: top()
{

    if(primero!=NULL)
    {
        return primero->_producto;
    }
    else
    {
        std::cout<<"\nPila vacia\n";
    }
    return Producto();
}
void Pila_Producto:: pop()
{
    nodo *aux=new nodo();
    aux=primero;
    if(primero!=NULL)
    {
        primero=aux->sgte;
        delete(aux);
    }
    else{
        std::cout<<"\n Lista vacia\n";
    }
}

std::string Pila_Producto::mostrar()
{
    std::stringstream ss;
    nodo *aux=new nodo();
    aux=primero;
    if(primero!=NULL)
    {
        while(aux!=NULL)
        {
            ss<<"El nombre del producto es : "<<aux->_producto.get_nombre()<<'\n';
            ss<<"El ID es : "<<aux->_producto.get_id()<<'\n';
            aux=aux->sgte;
        }
    }
    else{ss<<"\n Lista vacia\n";}

    return ss.str();
}

Pila_Producto::~Pila_Producto()
{
    //dtor
}
