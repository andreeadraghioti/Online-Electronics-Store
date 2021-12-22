#ifndef POO__SMARTWATCH_H
#define POO__SMARTWATCH_H
#include<iostream>
#include "product.h"

class smartwatch : public product {
    std::string materialCarcasa;
    std::string materialCurea;
public:
    const std::string &getMaterialCarcasa() const;

    void setMaterialCarcasa(const std::string &materialCarcasa);

    const std::string &getMaterialCurea() const;

    void setMaterialCurea(const std::string &materialCurea);

    smartwatch(const std::string &codProdus, const std::string &producator, const std::string &sistemOperare,
               const std::string &culoare, const std::string &tipIncarcare, float dimensiune, float greutate,
               float capacitateBaterie, float pret, int memorie, const std::string &materialCarcasa,
               const std::string &materialCurea);

    friend std::ostream &operator<<(std::ostream &os, const smartwatch &smartwatch);
};


#endif //POO__SMARTWATCH_H
