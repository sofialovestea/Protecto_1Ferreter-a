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
        cout<<"\nPila vacia\n";
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
        cout<<"\n Lista vacia\n";
    }
}

void Pila_Producto::mostrar()
{
    nodo *aux=new nodo();
    aux=primero;
    if(primero!=NULL)
    {
        while(aux!=NULL)
        {
            cout<<"El nombre del producto es : "<<aux->_producto.get_nombre()<<endl;
            cout<<"El ID es : "<<aux->_producto.get_id()<<endl;
            aux=aux->sgte;
        }
    }
    else{cout<<"\n Lista vacia\n";}
}

Pila_Producto::~Pila_Producto()
{
    //dtor
}
