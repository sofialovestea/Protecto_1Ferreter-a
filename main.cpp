//
//  main.cpp
//  Ferretería - Proyecto
//
//  Created by Sofia Aguilar on 26/9/18.
//  Copyright © 2018 Sofia Aguilar. All rights reserved.
//
#include "Section.hpp"
#include "Sucursales.hpp"


using namespace std;

int main()
{
    Sucursales s1(001, "Desamparados, Alajuela");
    Sucursales s2(002, "Belén, Heredia");
    Sucursales s3(003, "Barrio México, San José");

    
    Producto p1(1, "TABLAS PLAYWOOD", 2000);
    Producto p2(2, "TABLAS DE CEDRO", 2000);
    
    Section l1(20, "MADERAS");
    
    l1.addProducto(p1);
    l1.addProducto(p2);
    
    cout << s1.toString() << endl;
    cout << s2.toString() << endl;
    cout << s3.toString() << endl;

    
    cout << l1.toString() << endl;
    
    l1.deleteProducto(2);
    
    cout << l1.toString() << endl;
    
}