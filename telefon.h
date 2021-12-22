#ifndef POO__TELEFON_H
#define POO__TELEFON_H
#include<iostream>
#include "product.h"

class telefon : public product {
    std::string sloturiSIM;
    int rezolutieCamera;
public:
    const std::string &getSloturiSim() const;

    void setSloturiSim(const std::string &sloturiSim);

    int getRezolutieCamera() const;

    void setRezolutieCamera(int rezolutieCamera);

    telefon(const std::string &codProdus, const std::string &producator, const std::string &sistemOperare,
            const std::string &culoare, const std::string &tipIncarcare, float dimensiune, float greutate,
            float capacitateBaterie, float pret, int memorie, const std::string &sloturiSim, int rezolutieCamera);

    friend std::ostream &operator<<(std::ostream &os, const telefon &telefon);
};

#endif //POO__TELEFON_H
