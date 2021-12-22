#ifndef POO__PRODUCT_H
#define POO__PRODUCT_H
#include <iostream>

class product {
protected:
    std::string codProdus;
    std::string producator;
    std::string sistemOperare;
    std::string culoare;
    std::string tipIncarcare;
    float dimensiune;
    float greutate;
    float capacitateBaterie;
    float pret;
    int memorie;
    int cantitate;
public:
    const std::string &getCodProdus() const;

    void setCodProdus(const std::string &codProdus);

    const std::string &getProducator() const;

    void setProducator(const std::string &producator);

    const std::string &getSistemOperare() const;

    void setSistemOperare(const std::string &sistemOperare);

    const std::string &getCuloare() const;

    void setCuloare(const std::string &culoare);

    const std::string &getTipIncarcare() const;

    void setTipIncarcare(const std::string &tipIncarcare);

    float getDimensiune() const;

    void setDimensiune(float dimensiune);

    float getGreutate() const;

    void setGreutate(float greutate);

    float getCapacitateBaterie() const;

    void setCapacitateBaterie(float capacitateBaterie);

    float getPret() const;

    void setPret(float pret);

    int getMemorie() const;

    void setMemorie(int memorie);

    int getCantitate() const;

    void setCantitate(int cantitate);

    product();

    product(const std::string &codProdus, const std::string &producator, const std::string &sistemOperare,
            const std::string &culoare, const std::string &tipIncarcare, float dimensiune, float greutate,
            float capacitateBaterie, float pret, int memorie);

    friend std::ostream &operator<<(std::ostream &os, const product &product);
     //Constructorul de copiere:
     product(const product& cc);

     //Operatorul = :
     product& operator = (const product& op);

     //Destructor:
     virtual ~product();
};


#endif //POO__PRODUCT_H
