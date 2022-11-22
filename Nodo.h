#ifndef NODO_H
#define NODO_H
#include "Personaje.h"
#include <stdlib.h>
#include<iostream>
using namespace std;


class Nodo
{
    public:
        Nodo();
        ~Nodo();
        Personaje dato;
        Nodo *sig;
        Nodo *ant;
    private:
};

#endif // NODO_H
