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

    void set_number(short int);
    void set_description(std::string);
    void set_list_ofProductos(std::list<Producto>);

    short int get_number();
    std::string get_description();
    std::list<Producto> get_list_ofProductos();

    Section(){};
    Section(short int, std::string);
    Section(short int, std::string, std::list<Producto>);
    ~Section();

    void addProducto(Producto);
    void deleteProducto(short int);
    std::string toString(); //Imprime la Seccion con todo y sus productos
    std::string toStringProducto(short int);
    std::string toStringMin(); //Solo imprime numero y nombre de la seccion
};

#endif
