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
<<<<<<< HEAD
#include "Producto.h"

using namespace std;
=======
#include "Producto.hpp"


>>>>>>> 10c841cf9d1bb1365e6abda1503ec2c6a195dae5

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
    void mostrar();
    void Destruir();
    int getId();
    string getNombre();
    ~Pila_Producto();
    
private:
    Puntero primero;
    Producto _producto;
};
#endif /* Pila_hpp */
