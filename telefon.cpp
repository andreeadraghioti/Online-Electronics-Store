#include "telefon.h"

const std::string &telefon::getSloturiSim() const {
    return sloturiSIM;
}

void telefon::setSloturiSim(const std::string &sloturiSim) {
    sloturiSIM = sloturiSim;
}

int telefon::getRezolutieCamera() const {
    return rezolutieCamera;
}

void telefon::setRezolutieCamera(int rezolutieCamera) {
    telefon::rezolutieCamera = rezolutieCamera;
}

telefon::telefon(const std::string &codProdus, const std::string &producator, const std::string &sistemOperare,
                 const std::string &culoare, const std::string &tipIncarcare, float dimensiune, float greutate,
                 float capacitateBaterie, float pret, int memorie, const std::string &sloturiSim, int rezolutieCamera)
        : product(codProdus, producator, sistemOperare, culoare, tipIncarcare, dimensiune, greutate, capacitateBaterie,
                  pret, memorie) {
    this->sloturiSIM=sloturiSim;
    this->rezolutieCamera=rezolutieCamera;
}

std::ostream &operator<<(std::ostream &os, const telefon &telefon) {
    os << static_cast<const product &>(telefon) << " sloturiSIM: " << telefon.sloturiSIM << " rezolutieCamera: "
       << telefon.rezolutieCamera;
    return os;
}
