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
            cout<<aux->_producto.toString()<<endl;
            aux=aux->sgte;
        }
    }
    else{cout<<"\n Lista vacia\n";}
}

Pila_Carrito::~Pila_Carrito()
{
    //dtor
}

Pila_Carrito::Pila_Carrito()
{
    
}
