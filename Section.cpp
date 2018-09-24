#include "Section.h"

Section::Section(short int var_1, std::string var_2)
{
    number = var_1;
    description = var_2;
}

Section::Section(short int var_1, std::string var_2, std::list<Producto> var_3)
{
    number = var_1;
    description = var_2;
    list_ofProductos = var_3;
}

void Section::addProducto(Producto var)
{
    list_ofProductos.push_back(var);
}

void Section::deleteProducto(short int var_id)
{
    std::list<Producto>::iterator findIter = std::find(ilist.begin(), ilist.end(), var)
}

