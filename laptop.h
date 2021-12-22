#ifndef POO__LAPTOP_H
#define POO__LAPTOP_H
#include<iostream>
#include "product.h"

class laptop : public product {
    std::string procesor;
    std::string tipStocare;
    std::string placaVideo;
public:
    const std::string &getProcesor() const;

    void setProcesor(const std::string &procesor);

    const std::string &getTipStocare() const;

    void setTipStocare(const std::string &tipStocare);

    const std::string &getPlacaVideo() const;

    void setPlacaVideo(const std::string &placaVideo);

    laptop(const std::string &codProdus, const std::string &producator, const std::string &sistemOperare,
           const std::string &culoare, const std::string &tipIncarcare, float dimensiune, float greutate,
           float capacitateBaterie, float pret, int memorie, const std::string &procesor, const std::string &tipStocare,
           const std::string &placaVideo);

    friend std::ostream &operator<<(std::ostream &os, const laptop &laptop);
};


#endif //POO__LAPTOP_H
