//
//  Cliente.hpp
//  Ferretería - Proyecto
//
//  Created by Sofia Aguilar on 8/10/18.
//  Copyright © 2018 Sofia Aguilar. All rights reserved.
//

#ifndef Cliente_hpp
#define Cliente_hpp

#include <stdio.h>
#include <iostream>
#include "Pila.hpp"

using namespace std;

class Cliente
{
public:
    Cliente();
    Cliente (string,int);
    virtual ~Cliente();
    
    
    string getNombre();
    int getID();
    void setNombre(string);
    void setID(int);
    
    Pila_Carrito miCarrito;
    void mostrarCarrito();
    
private:
    int id;
    string nombre;
    
};


class ColaClientes
{
    
    struct nodo
    {
    public:
        nodo();
        virtual ~nodo ();
        
        Cliente usuario;
        
        nodo *siguiente;
        
    };

public:
    ColaClientes();
    virtual ~ColaClientes();
    
    void insertar(Cliente);
    
    void borrar();
    void mostrarCliente();
    
    Cliente getCliente();
    
protected:
    
private:
    nodo *primero  ;
    nodo *ultimo;
};

#endif /* Cliente_hpp */
