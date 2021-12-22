#ifndef POO__CUSTOMER_H
#define POO__CUSTOMER_H
#include<iostream>

class customer{
    std::string nume;
    std::string prenume;
    std::string oras;
    std::string strada;
    int nrStrada;
    int customerid;
    int codpostal;
public:
    std::string getNume() const;
    void setNume(const std::string &nume);

    std::string getPrenume() const;
    void setPrenume(const std::string &prenume);

    std::string getOras() const;
    void setOras(const std::string &oras);

    std::string getStrada() const;
    void setStrada(const std::string &strada);

    int getNrStrada() const;
    void setNrStrada(int nrStrada);

    int getCustomerid() const;
    void setCustomerid(int customerid);

    int getCodpostal() const;
    void setCodpostal(int codpostal);

    customer(const std::string &nume, const std::string &prenume, const std::string &oras,
             const std::string &strada, int nrStrada, int customerid, int codpostal);

    friend std::ostream &operator<<(std::ostream &os, const customer &customer);

};


#endif //POO__CUSTOMER_H
