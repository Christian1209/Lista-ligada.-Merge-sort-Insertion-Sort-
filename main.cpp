#include <iostream>
#include <stdlib.h>
#include "Lista.h"
#include "Nodo.h"
using namespace std;

int main()
{
Lista *uno = new Lista;
Personaje p1("a",1,1);
string nom;
int niv;
int ide;
int op=0;
   do{
        cout<<"\nLista de Productos. Se componen de Nombre, Precio y ID"<<endl;
        cout<<"\nEscoge una opcion\n1.-)salir\n2.-)insertar\n3.-)eliminar\n4.-)buscar\n5.-)vacia\n6.-)primero"<<endl;
        cout<<"7.-)ultimo\n8.-)anterior\n9.-)siguiente\n10.-)tamaño\n11.-)vaciar (eliminarTodo)\n12)mostrarLista\n13)inserta Por posicion"<<endl;
        cout<<"14.-)Inserta al final\n15.-)MergeSort\n16.-)Insert sort"<<endl;
        cin>>op;
        switch(op){
            case 1:
                cout<<"Salir..."<<endl;
                break;
            case 2:
                cout<<"Escogiste insertar, introduce el nombre producto a insertar"<<endl;
                cin.ignore();
                getline(cin,nom);
                cout<<"Introduce el precio que tendra el producto"<<endl;
                cin>>niv;
                cout<<"Introduce el ID de tu producto."<<endl;
                cin>>ide;
                p1.setNombre(nom);
                p1.setPrecio(niv);
                p1.setId(ide);
                uno->inserta(p1);
                break;
            case 3:
                cout<<"Escogiste Eliminar , introduce el nombre del producto a eliminar"<<endl;
                cin.ignore();
                getline(cin,nom);
                uno->eliminar(nom);
                break;
            case 4:
                cout<<"Escogiste Buscar, introduce el producto que deseas Buscar"<<endl;
                cin.ignore();
                getline(cin,nom);
                uno->buscar(nom);
                break;
            case 5:
                cout<<"Escogiste Vacia, comprobando si lista es vacia... "<<endl;
                if (uno->vacia()){
                        cout<<"Lista vacia"<<endl;
                    }
                else{
                    cout<<"Lista con elementos"<<endl;
                }
                break;
            case 6:
                cout<<"Escogiste Primera, devolviendo posicion primera y mostrando dato..."<<endl;
                uno->primero();
                break;
            case 7:
                cout<<"Escogiste Ultimo, devolviendo posicion ultima y mostrando dato..."<<endl;
                uno->ultimo();
                break;
            case 8:
                cout<<"Escogiste Anterior, introduce el producto que deseas buscar para encontrar la posicion anterior"<<endl;
                cin.ignore();
                getline(cin,nom);
                uno->anterior(nom);
                break;
            case 9:
                cout<<"Escogiste Siguiente, introduce el producto que deseas buscar para encontrar la posicion siguiente"<<endl;
                cin.ignore();
                getline(cin,nom);
                uno->siguiente(nom);
                break;
            case 10:
                cout<<"Escogiste Tamaño, devolviendo tamaño de la lista"<<endl;
                cout<<uno->tamano()<<endl;
                break;
            case 11:
                cout<<"Escogiste Vaciar, vaciando lista..."<<endl;
                uno->vaciar();
                break;
            case 12:
                cout<<"Escogiste Mostrar lista, mostrando..."<<endl;
                uno->mostrar();
                break;
            case 13:
                int po;
                cout<<"Escogiste insertar por posicion, introduce el nombre del producto a insertar"<<endl;
                cin.ignore();
                getline(cin,nom);
                cout<<"Introduce el precio que tendra el producto"<<endl;
                cin>>niv;
                cout<<"Introduce el ID de tu producto."<<endl;
                cin>>ide;
                cout<<"introduce la posicion en la que deseas insertar"<<endl;
                cin>>po;
                p1.setNombre(nom);
                p1.setPrecio(niv);
                p1.setId(ide);
                uno->inserta(p1);
                break;
            case 14:
                cout<<"Escogiste insertar al final, introduce el nombre producto a insertar"<<endl;
                cin.ignore();
                getline(cin,nom);
                cout<<"Introduce el precio que tendra el producto"<<endl;
                cin>>niv;
                cout<<"Introduce el ID de tu producto."<<endl;
                cin>>ide;
                cout<<"introduce la posicion en la que deseas insertar"<<endl;
                cin>>po;
                p1.setNombre(nom);
                p1.setPrecio(niv);
                p1.setId(ide);
                uno->insertaf(p1);
                break;
            case 15:
                {
                cout<<"Escogiste MergeSort..."<<endl;
                int n=0;
                int f;
                f=uno->tamano();
                f--;
                uno->MergeSort(n,f);
                cout<<"Lista ordenada correctamente por MergeSort!."<<endl;
                break;}
            case 16:
                {
                cout<<"Escogiste InsertSort..."<<endl;
                uno->insertSort();
                cout<<"Lista ordenada correctamente por InsertSort!."<<endl;
                break;}
        }
    }while(op!=1);
}
