//
//  MenuInterfaz.hpp
//  Ferretería - Proyecto
//
//  Created by Sofia Aguilar on 13/10/18.
//  Copyright © 2018 Sofia Aguilar. All rights reserved.
//

#ifndef MenuInterfaz_hpp
#define MenuInterfaz_hpp

#include <stdio.h>
#include "Sucursales.hpp"
#include "Section.hpp"
#include "Producto.cpp"
#include <stdlib.h>
#include <limits>
#include <exception>
#include<iostream>
#include <string>
//#include<bits/stdc++.h>
#include <fstream>
#include <stdio.h>
using namespace std;


class Interfaz
{
public:
    
    void Menu_Principal();
    void MenuPrincipalAdministrador();
    void Menu_Administrador_Sucursal();
    //void Menu_Administrador_Seccion();
    //void Menu_Administrador_Tipo_Producto();
    //void Menu_Cliente();
    void Menu_Sucursal();
    void Menu_Seccion();
    void Menu_Tipo_Producto();
    void leerArchivo();
};


#endif /* MenuInterfaz_hpp */
