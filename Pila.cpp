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

void Pila_Carrito:: push(Producto p)
{
    nodo *nuevo=new nodo();
    nuevo->miProducto=p;
    nuevo->sgte=primero;
    primero=nuevo;
    
}


bool Pila_Carrito::PilaVacia()
{
    if(primero == NULL)
    {
        return true;
    }else
    {
        return false;
    }
}
Producto Pila_Carrito:: top()
{
    
    if(primero!=NULL)
    {
        return primero->miProducto;
    }
    else
    {
        cout<<"\nPila vacia\n";
    }
    return Producto();
}
void Pila_Carrito:: pop()
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

void Pila_Carrito::mostrar()
{
    nodo *aux=new nodo();
    aux=primero;
    if(primero!=NULL)
    {
        while(aux!=NULL)
        {
            cout<<aux->miProducto.toString()<<endl;
            aux=aux->sgte;
        }
    }
    else{cout<<"\n Lista vacia\n";}
}

Pila_Producto::~Pila_Producto()
{
    //dtor
}
