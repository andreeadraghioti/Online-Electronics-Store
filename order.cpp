#include <iostream>
#include "order.h"
order::order() {
    for(int i=0; i<100; i++)
    {listaProduse[i] = {NULL};}
    capatLista = 0;
}
void order::adaugaProdus(product *produsCurent) {
    listaProduse[capatLista] = produsCurent;
    capatLista++;
}

float order::pretTotal() {
    float pretTotal=0.0;
    for(int i=0; i<capatLista; i++)
    {
        if(listaProduse[i]!=NULL)
        {
            pretTotal += (float)listaProduse[i]->getPret()*(float)listaProduse[i]->setCantitate();
        }
        else {break;}
    }
    return pretTotal;
}