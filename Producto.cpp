#include "Producto.h"

Producto::Producto()
{
    id = 0;
    nombre = "UNKOWN";
    precio_venta = 0.0;
}

Producto::Producto(short int var_1, std::string var_2, float var_3)
{
    id = var_1;
    nombre = var_2;
    precio_venta = var_3;
}

std::string Producto::toString()
{
    std::stringstream ss;
    
    ss << "Descripcion del Producto: " << nombre << "\n";
    ss << "Codigo del Producto: " << id << "\n";
    ss << "Precio: " << precio_venta << " ivi" << "\n";
    
    return ss.str();
}