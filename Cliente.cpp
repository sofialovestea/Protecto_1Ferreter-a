//
//  Cliente.cpp
//  Ferretería - Proyecto
//
//  Created by Sofia Aguilar on 8/10/18.
//  Copyright © 2018 Sofia Aguilar. All rights reserved.
//

#include "Cliente.hpp"

ColaClientes::ColaClientes()
{
    primero=NULL;
}

void ColaClientes::insertar(Cliente c)
{
    nodo *nuevo=new nodo();
    nuevo->usuario=c;
    
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

void ColaClientes::mostrarCliente()
{
    nodo *actual=new nodo();
    actual=primero;
    if(primero!=NULL)
    {
        while(actual!=NULL)
        {
            cout<<"\n\nEl nombre del cliente es "<<actual->usuario.getNombre()<<endl;
            cout<<"El ID del cliente es "<<actual->usuario.getID()<<endl;
            cout<<"Tiene los productos siguientes\n";actual->usuario.mostrarCarrito();
            actual= actual->siguiente;
        }
    }
    else{
        cout<<"Cola vacia\n";
    }
}

Cliente ColaClientes::getCliente()
{
    nodo *actual=new nodo();
    actual=primero;
    if(primero!=NULL)
    {
        return primero->usuario;
    }
    else
    {
        cout<<"Cola vacia\n";
    }
    return Cliente();
}

void ColaClientes::borrar()
{
    
    nodo *actual=new nodo();
    actual=primero;
    if(primero!=NULL)
    {
        primero=primero->siguiente;
    }
    else{
        cout<<"Cola vacia\n";
    }
}

ColaClientes::~ColaClientes()
{
    //dtor
}


// METODOS CLIENTE

void Cliente::setID(int id)
{
    this->id = id;
}

int Cliente::getID()
{
    return id;
}

void Cliente::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Cliente::getNombre()
{
    return nombre;
}

void Cliente::mostrarCarrito()
{
    miCarrito.mostrar();
}