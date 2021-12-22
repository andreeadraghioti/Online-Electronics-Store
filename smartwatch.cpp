#include "smartwatch.h"

const std::string &smartwatch::getMaterialCarcasa() const {
    return materialCarcasa;
}

void smartwatch::setMaterialCarcasa(const std::string &materialCarcasa) {
    smartwatch::materialCarcasa = materialCarcasa;
}

const std::string &smartwatch::getMaterialCurea() const {
    return materialCurea;
}

void smartwatch::setMaterialCurea(const std::string &materialCurea) {
    smartwatch::materialCurea = materialCurea;
}

smartwatch::smartwatch(const std::string &codProdus, const std::string &producator, const std::string &sistemOperare,
                       const std::string &culoare, const std::string &tipIncarcare, float dimensiune, float greutate,
                       float capacitateBaterie, float pret, int memorie, const std::string &materialCarcasa,
                       const std::string &materialCurea) : product(codProdus, producator, sistemOperare, culoare,
                                                                   tipIncarcare, dimensiune, greutate,
                                                                   capacitateBaterie, pret, memorie){
    this->materialCarcasa=materialCarcasa;
    this->materialCurea=materialCurea;
}

std::ostream &operator<<(std::ostream &os, const smartwatch &smartwatch) {
    os << static_cast<const product &>(smartwatch) << " materialCarcasa: " << smartwatch.materialCarcasa
       << " materialCurea: " << smartwatch.materialCurea;
    return os;
}
