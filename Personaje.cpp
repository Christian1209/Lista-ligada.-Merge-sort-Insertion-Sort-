#include "Personaje.h"
#include <stdlib.h>
#include <stdio.h>
using namespace std;

Personaje::Personaje(string nom,int n, int i){
    nombre=nom;
    precio=n;
    id=i;
}

Personaje::Personaje()
{
    //ctor
}

Personaje::~Personaje()
{
    //dtor
}

