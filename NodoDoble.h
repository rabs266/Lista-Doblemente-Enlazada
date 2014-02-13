#ifndef NODODOBLE_H
#define NODODOBLE_H
#include <iostream>

class NodoDoble
{
    public:
        int num;
        NodoDoble* ant;
        NodoDoble* sig;
        NodoDoble(int num);
        virtual ~NodoDoble();
    protected:
    private:
};

#endif // NODODOBLE_H
