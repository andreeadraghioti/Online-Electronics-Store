#ifndef POO__ORDER_H
#define POO__ORDER_H
#include<iostream>
#include "product.h"

class order{
    product* listaProduse[100];
    int capatLista;
public:
    void adaugaProdus(product*);
    float pretTotal();
     order();
};

#endif //POO__ORDER_H
