//
//  Caja.hpp
//  Ferretería - Proyecto
//
//  Created by Sofia Aguilar on 13/10/18.
//  Copyright © 2018 Sofia Aguilar. All rights reserved.
//

#ifndef Caja_hpp
#define Caja_hpp

#include <stdio.h>
#include "Cliente.hpp"


class Caja
{
    struct NodoCaja
    {
        Cliente miCliente;
        
        struct NodoCaja *siguiente;
    };
    
    
public:
    Caja();
    virtual ~Caja();
    
    void insertar(Cliente);
    void borrar();
    void mostrarCliente();
    
    Cliente getCliente();
    
protected:
    
private:
    NodoCaja *primero;
    NodoCaja *ultimo;
};


#endif /* Caja_hpp */
