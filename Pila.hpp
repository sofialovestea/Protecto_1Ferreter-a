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
#include "Producto.hpp"

//PILA CARRITO
class Pila_Carrito
{
    struct nodo
    {
        Producto miProducto;
        struct nodo *sgte;
    };
    
    typedef struct nodo *Puntero;
    
    
public:
    Pila_Carrito();
    void push(Producto);
    Producto top();
    void pop(void );
    bool PilaVacia(void);
    void mostrar(void);
    void DestruirPila(void);
    ~Pila_Carrito();
    //void menu(void);
    
private:
    Puntero primero;
};

//PILA PRODUCTO
class Pila_Producto
{
    
    struct nodo {
        Producto _producto;
        struct nodo *sgte;
        //struct nodo *primero;
    };
    
    typedef struct nodo *Puntero;
    
    
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
