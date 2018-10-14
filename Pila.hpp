//
//  Pila.hpp
//  Ferretería - Proyecto
//
//  Created by Sofia Aguilar on 8/10/18.
//  Copyright © 2018 Sofia Aguilar. All rights reserved.
//

#ifndef Pila_hpp
#define Pila_hpp

#include <stdio.h>
#include "Producto.h"

struct nodo {
    Producto _producto;
    struct nodo *sgte;
    //struct nodo *primero;
};

typedef struct nodo *Puntero;

class Pila_Producto
{


public:

    Pila_Producto();
    void push (Producto);
    void pop();
    Producto top();
    bool PilaVacia();
    std::string mostrar();
    void Destruir();
    int getId();
    std::string getNombre();
    ~Pila_Producto();

private:
    Puntero primero;
    Producto _producto;
};
#endif /* Pila_hpp */
