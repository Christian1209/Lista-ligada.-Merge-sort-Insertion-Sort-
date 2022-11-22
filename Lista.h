#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using namespace std;
#include "Personaje.h"
#include "Nodo.h"
class Lista
{
    public:
        Lista();
        ~Lista();
        void insertaPos(Personaje,int);
        void inicializa();
        void inserta(Personaje);
        void insertaf(Personaje);
        void mostrar();
        bool vacia();
        void vaciar();
        int tamano();
        Nodo* primero();
        Nodo* ultimo();
        void buscar(string);
        void eliminar(string);
        Nodo* anterior(string);
        Nodo* siguiente(string);
        Personaje prueba(Personaje);
        void MergeSort(int,int);
        void mezcla(int,int,int);
        void insertSort();

    private:
        Nodo *h;
};

#endif // LISTA_H
