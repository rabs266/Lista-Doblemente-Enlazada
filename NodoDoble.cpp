#include "NodoDoble.h"

NodoDoble::NodoDoble(int num)
{
    this->num = num;
    this->ant = NULL;
    this->sig = NULL;
}

NodoDoble::~NodoDoble()
{
    //dtor
}
