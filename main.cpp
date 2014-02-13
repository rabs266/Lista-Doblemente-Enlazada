#include <iostream>
#include "ListaDoble.h"

using namespace std;

int main()
{
    ListaDoble ld;

    ld.agregarNodo(new NodoDoble(1));
    ld.agregarNodo(new NodoDoble(2));
    ld.agregarNodo(new NodoDoble(3));

     //Que no truene aqui al agregar el primero ni el ultimo.
    ld.agregarNodo(new NodoDoble(100000),3);
    //d.agregarEnmedio(new NodoDoble(0),3);

  //  ld.borrarEnmedio(1);
    ld.imprimir();

    return 0;
}
