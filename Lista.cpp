#include "Lista.h"
int Lista::tamano(){
int cont=0;
Nodo *aux=h;
while(aux){
    cont++;
    aux=aux->sig;
}
return cont;
}
void Lista::inicializa(){
        h=nullptr;

}
void Lista::inserta(Personaje a){
    Nodo *tmp=new Nodo();
    tmp->dato=a;
    if (vacia()){
        h=tmp;
    }
    else {
        tmp->sig=h;
        h->ant=tmp;
        h=tmp;
    }
}
void Lista::mostrar(){
    Nodo *aux=h;
    if (aux){
        while(aux){
            cout<<"[Nombre: "<<aux->dato.getNombre()<<" Precio: "<<aux->dato.getPrecio()<<" Id: "<<aux->dato.getId()<<"]";
            aux=aux->sig;
        }
    }
    else{
        cout<<"lista vacia"<<endl;
    }
}
void Lista::insertaf (Personaje d){
    Nodo *tmp = new Nodo();
    tmp->dato=d;

    Nodo *aux=h;
    if(aux==nullptr){
        h=tmp;
    }
    else{
            while(aux->sig){
                    aux=aux->sig;
            }
            aux->sig=tmp;
            tmp->ant=aux;
        }
    }
void Lista::insertaPos(Personaje dato, int pos){
    if (pos>=1 && pos-1<tamano()){
        Nodo *tmp=new Nodo();
        tmp->dato=dato;
        Nodo *aux=h,*auxRet;

        int i=0;
        while(i<pos-1 && aux){
            aux=aux->sig;
            i++;
        }
        if(aux==h){
            tmp->sig=h;
            h->ant=tmp;
            h=tmp;
        }
        else{
            aux->ant->sig=tmp;
            tmp->ant=aux->ant;
            tmp->sig=aux;
            aux->ant=tmp;
            }
        }
    else{
        cout<<"pos no valida"<<endl;
    }
    }
bool Lista::vacia(){
       if (h==nullptr){
        return true;
        }
    else{
        return false;
        }
}
Nodo* Lista::primero(){
    if (vacia()){
        cout<<"lista vacia"<<endl;
        return nullptr;
    }
    else{
        Nodo *prim= new Nodo();
        prim=h;
        cout<<"\nEl primer elemento de la lista es el personaje : "<<prim->dato.getNombre()<<endl;
        return prim;
    }
}
Nodo* Lista::ultimo(){
    Nodo *tmp = new Nodo();
    Nodo *aux=h;
    if (vacia()){
        cout<<"lista vacia"<<endl;
        return nullptr;
    }
    else{
    while(aux->sig){
        aux=aux->sig;
        }
    cout<<"el ultimo elemento de la lista es el personaje: "<<aux->dato.getNombre()<<endl;
    return aux;
        }
    }
void Lista::buscar(string d){
    int b=0;
    int i=0;
    Nodo *aux=h;
    if(vacia()){
        cout<<"Lista vacia"<<endl;
    }
    else{
        while(aux){
            if(d==aux->dato.getNombre()){
                b=1;
                i=i+1;
                cout<<"\ntu producto:"<<aux->dato.getNombre()<<" ha sido encontrado en la posicion: "<<i<<endl;
                return;

            }
            aux=aux->sig;
            i=i+1;
        }
    }
    if (b==0){
        cout<<"Producto no encontrado"<<endl;
    }
}
void Lista::eliminar(string d){
    Nodo *aux=h;
    Nodo *auxR=nullptr;
    bool band=true;
    if (aux){//elementos de la lista
        while(aux and band){
            if(aux->dato.getNombre()!=d){
                auxR=aux;
                aux=aux->sig;
            }
            else{
             band=false;
             }
        }
        if (aux==nullptr){
            cout<<"Producto no encontrado"<<endl;
        }
        else if(aux==h){
            h->sig->ant=nullptr;
            h=h->sig;
            cout<<"Producto eliminado"<<endl;
            delete aux;
        }
        else{
            aux->ant->sig=aux->sig;
            aux->sig->ant=aux->ant;
            cout<<"Producto eliminado"<<endl;
            delete aux;
        }
    }
    else
        cout<<"Lista vacia"<<endl;
}
Nodo* Lista::anterior(string d){
    Nodo *aux=h;
    Nodo *auxR=nullptr;
    bool band=true;
    if(aux){
        while(aux and band){
            if(aux->dato.getNombre()!=d){
                aux=aux->sig;
            }
            else{
                band=false;
            }
        }
        if(aux->ant==nullptr){
            cout<<"primera posicion, no hay anterior"<<endl;
            return nullptr;
        }
        else if(aux==nullptr){
            cout<<"dato no encontrado"<<endl;
            return nullptr;
        }
        else
            cout<<"dato encontrado, se devuelve la posicion de: "<<aux->ant->dato.getNombre()<<endl;
            return aux->ant;
    }
    return nullptr;
}
Nodo* Lista::siguiente(string d){
    int b=0;
    Nodo *aux=h;
    if(vacia()){
        cout<<"Lista vacia"<<endl;
    }
    else{
        while(aux){
            if(aux->dato.getNombre()==d and aux->sig==nullptr){
                cout<<"\nTu Producto es el ultimo, no hay siguiente"<<endl;
                return nullptr;
            }
            else if(d==aux->dato.getNombre()){
                b=1;
                cout<<"\ntu Producto ha sido encontrado, se devuelve la posicion de :"<<aux->sig->dato.getNombre()<<endl;
                return aux->sig;
            }
            else{
                aux=aux->sig;
            }
        }
    }
    if (b==0){
        cout<<"Producto no encontrado"<<endl;
        return nullptr;
    }
}
void Lista::vaciar(){
    Nodo *aux=h;
    if(vacia()){
        cout<<"lista vacia!"<<endl;
    }
    else if(h->sig==nullptr){
            cout<<"lista de un elemento vaciada..."<<endl;
            h=nullptr;
    }
    else{
            cout<<"Vaciando Lista de varios elementos..."<<endl;
        while(h){
            aux=h;
            h=h->sig;
            aux=nullptr;
        }
    }
}
void Lista::MergeSort(int primero,int ultimo){
    int central;
    if(primero<ultimo){
        central = (primero+ultimo)/2;
        MergeSort(primero,central);
        MergeSort(central+1,ultimo);
        mezcla(primero,central,ultimo);
    }
}
void Lista::mezcla(int izquierda,int medio,int derecha){
    Lista *dos = new Lista;
    Nodo *auxi=h;
    int i,k,z;
    i=z=izquierda;
    int cont=0;
    k = medio+1;
    Nodo *centro=h;
    auxi=h;
    while(medio>cont){
        cont++;
        centro=centro->sig;
    }
    centro=centro->sig;
    cont=0;
    while(izquierda>cont){
        cont++;
        auxi=auxi->sig;
    }
    cont=0;
    while(i<=medio && k<=derecha){
            Nodo *tmp=new Nodo();
        if((auxi->dato.getId())<(centro->dato.getId())){
            tmp->dato=auxi->dato;
            dos->insertaf(tmp->dato);
            auxi=auxi->sig;
            i++;
        }
        else{
            tmp->dato=centro->dato;
            dos->insertaf(tmp->dato);
            centro=centro->sig;
            k++;
        }
    }
    while(i<=medio){
        Nodo *tmp=new Nodo();
        tmp=auxi;
        dos->insertaf(tmp->dato);
        auxi=auxi->sig;
        i++;
    }
    while(k<=derecha){
        Nodo *tmp=new Nodo();
        tmp=centro;
        dos->insertaf(tmp->dato);
        centro=centro->sig;
        k++;
    }
    Nodo *auxdos=dos->h;
    cont=0;
    auxi=h;
    while(izquierda>cont){
        cont++;
        auxi=auxi->sig;
    }
    auxdos=dos->h;
    while(auxdos){
        auxi->dato=auxdos->dato;
        auxdos=auxdos->sig;
        auxi=auxi->sig;
        }
    delete dos;
}

void Lista::insertSort(){
    Nodo *temp=new Nodo();
    Nodo *aux=h;
    while (aux){
            temp->dato=aux->dato;
        while((aux->ant!=nullptr)&&(aux->ant->dato.getId()>temp->dato.getId())){
                aux->dato=aux->ant->dato;
                aux=aux->ant;
        }
        aux->dato=temp->dato;
        aux=aux->sig;
    }
}

Lista::Lista()
{
    h=nullptr;
    //ctor
}

Lista::~Lista()
{
    //dtor
}
