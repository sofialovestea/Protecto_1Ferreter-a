//
//  Caja.cpp
//  Ferretería - Proyecto
//
//  Created by Sofia Aguilar on 13/10/18.
//  Copyright © 2018 Sofia Aguilar. All rights reserved.

// Incluye Cola para los clientes

#include "Caja.hpp"

Caja::Caja()
{
    primero=NULL;
}

void Caja::insertar(Cliente c)
{
    NodoCaja *nuevo=new NodoCaja();
    nuevo->miCliente=c;
    
    if(primero==NULL)
    {
        primero=nuevo;
        primero->siguiente=NULL;
        ultimo=primero;
    }
    else{
        ultimo->siguiente=nuevo;
        nuevo->siguiente=NULL;
        ultimo=nuevo;
    }
    
}

void Caja::mostrarCliente()
{
    NodoCaja *actual=new NodoCaja();
    actual=primero;
    if(primero!=NULL)
    {
        while(actual!=NULL)
        {
            cout<<"\n\nEl nombre del cliente es "<<actual->miCliente.getNombre()<<endl;
            cout<<"El ID del cliente es "<<actual->miCliente.getID()<<endl;
            cout<<"Tiene los productos siguientes\n";actual->miCliente.mostrarCarrito();
            actual= actual->siguiente;
        }
    }
    else{
        cout<<"Cola vacia\n";
    }
}

Cliente Caja::getCliente()
{
    NodoCaja *actual=new NodoCaja();
    actual=primero;
    if(primero==NULL)
    {
        return primero->miCliente;
    }
    else{
        cout<<"La cola se encuentra vacia\n";
    }
    return Cliente();
}

void Caja::borrar()
{
    
    NodoCaja *actual=new NodoCaja();
    actual=primero;
    if(primero==NULL)
    {
        primero=primero->siguiente;
    }
    else{
        cout<<"Cola vacia\n";
    }
}

Caja::~Caja()
{
    //dtor
}