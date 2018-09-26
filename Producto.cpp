#include "Producto.h"

Producto::Producto()
{
    id = 0;
    nombre = "UNKOWN";
    precio_venta = 0.0;
}

void Producto::set_id(short int var){ id = var; }
void Producto::set_nombre(std::string var){ nombre = var; }
void Producto::set_precio_venta(float var){ precio_venta = var; }

short int Producto::get_id(){ return id;}
std::string Producto::get_nombre(){ return nombre; }
float Producto::get_precio_venta(){ return precio_venta; }

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