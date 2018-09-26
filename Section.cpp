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

Section::~Section()
{
    
}

void Section::set_number(short int var){ number = var; }
void Section::set_description(std::string var){ description = var; }
void Section::set_list_ofProductos(std::list<Producto> var){ list_ofProductos = var; }

short int Section::get_number(){ return number; }
std::string Section::get_description() { return description; }
std::list<Producto> Section::get_list_ofProductos(){ return list_ofProductos; }

void Section::addProducto(Producto var)
{
    list_ofProductos.push_back(var);
}

void Section::deleteProducto(short int var)
{
    std::list<Producto>::iterator it = list_ofProductos.begin();
    
    for(it = list_ofProductos.begin(); it != list_ofProductos.end(); it++)
    {
        Producto aux = *it;
        if(aux.get_id() == var)
        {
            it = list_ofProductos.erase(it);
        }
    }
}

Producto Section::findProducto(short int var)
{
    std::list<Producto>::iterator it = list_ofProductos.begin();
    Producto aux;
    
    for(it = list_ofProductos.begin(); it != list_ofProductos.end(); it++)
    {
        aux = *it;
        if(aux.get_id() == var)
        {
            break;
        }
    }
    
    return aux;
}

std::string Section::toStringProducto(short int var)
{
    std::stringstream ss;
    std::list<Producto>::iterator it = list_ofProductos.begin();
    
    for(it = list_ofProductos.begin(); it != list_ofProductos.end(); it++)
    {
        Producto aux = *it;
        if(aux.get_id() == var)
        {
            ss << aux.toString() << '\n';
        }
    }
    
    return ss.str();
}

std::string Section::toStringMin()
{
    std::stringstream ss;
    
    ss << "Sección de: " << description << "\n" << "Numero: " << number << "\n";

    return ss.str();
}

std::string Section::toString()
{
    std::stringstream ss;
    
    ss << "Sección de: " << description << "\n" << "Numero: " << number << "\n";
    
    std::list<Producto>::iterator it_out = list_ofProductos.begin();
    for(it_out = list_ofProductos.begin(); it_out != list_ofProductos.end(); it_out++)
    {
        Producto pivot = *it_out;
        ss << pivot.toString();
        ss << "\n";
    }
    
    
    return ss.str();
}
