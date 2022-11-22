#include "Nodo.h"
#include <stdlib.h>
using namespace std;
Nodo::Nodo()
{
    dato.setNombre("");
    dato.setId(0);
    dato.setPrecio(0);
    sig = nullptr;
    ant = nullptr;
    //ctor
}

Nodo::~Nodo()
{
    //dtor
}
