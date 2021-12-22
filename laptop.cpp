#include "laptop.h"

const std::string &laptop::getProcesor() const {
    return procesor;
}

void laptop::setProcesor(const std::string &procesor) {
    laptop::procesor = procesor;
}

const std::string &laptop::getTipStocare() const {
    return tipStocare;
}

void laptop::setTipStocare(const std::string &tipStocare) {
    laptop::tipStocare = tipStocare;
}

const std::string &laptop::getPlacaVideo() const {
    return placaVideo;
}

void laptop::setPlacaVideo(const std::string &placaVideo) {
    laptop::placaVideo = placaVideo;
}

laptop::laptop(const std::string &codProdus, const std::string &producator, const std::string &sistemOperare,
               const std::string &culoare, const std::string &tipIncarcare, float dimensiune, float greutate,
               float capacitateBaterie, float pret, int memorie, const std::string &procesor,
               const std::string &tipStocare, const std::string &placaVideo) : product(codProdus, producator,
                                                                                       sistemOperare, culoare,
                                                                                       tipIncarcare, dimensiune,
                                                                                       greutate, capacitateBaterie,
                                                                                       pret, memorie){
    this->procesor=procesor;
    this->tipStocare=tipIncarcare;
    this->placaVideo=placaVideo;
}

std::ostream &operator<<(std::ostream &os, const laptop &laptop) {
    os << static_cast<const product &>(laptop) << " procesor: " << laptop.procesor << " tipStocare: "
       << laptop.tipStocare << " placaVideo: " << laptop.placaVideo;
    return os;
}
