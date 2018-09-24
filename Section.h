#ifndef SECTION_H
#define SECTION_H

#include "Producto.h"
#include <list>

class Section
{
    public:
    short int number;
    std::string description;
    std::list<Producto> list_ofProductos;
    
    Section();
    Section(short int, std::string);
    Section(short int, std::string, std::list<Producto>);
    ~Section(){};
    
    void addProducto(Producto);
    void deleteProducto(short int);
    Producto findProducto();
    std::string toString(); //Imprime la Seccion con todo y sus productos
    std::string toStringProducto(short int);
    std::string toStringMin(); //Solo imprime numero y nombre de la seccion
};

#endif