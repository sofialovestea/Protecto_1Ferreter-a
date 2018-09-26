#include "Section.h"

using namespace std;

int main(int argc, char **argv)
{
	Producto p1(1, "TABLAS PLAYWOOD", 2000);
    Producto p2(2, "TABBLAS DE CEDRO", 2000);
    
    Section l1(20, "MADERAS");
    
    l1.addProducto(p1);
    l1.addProducto(p2);
    
    cout << l1.toString() << endl;
    
    l1.deleteProducto(2);
    
    cout << l1.toString() << endl; 
    
}
