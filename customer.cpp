#include "customer.h"

    std::string customer::getNume() const {
        return nume;
    }

    void customer::setNume(const std::string &nume) {
        customer::nume = nume;
    }

    std::string customer::getPrenume() const {
        return prenume;
    }

    void customer::setPrenume(const std::string &prenume) {
        customer::prenume = prenume;
    }

    std::string customer::getOras() const {
        return oras;
    }

    void customer::setOras(const std::string &oras) {
        customer::oras = oras;
    }

    std::string customer::getStrada() const {
        return strada;
    }

    void customer::setStrada(const std::string &strada) {
        customer::strada = strada;
    }

    int customer::getNrStrada() const {
        return nrStrada;
    }

    void customer::setNrStrada(int nrStrada) {
        customer::nrStrada = nrStrada;
    }

    int customer::getCustomerid() const {
        return customerid;
    }

    void customer::setCustomerid(int customerid) {
        customer::customerid = customerid;
    }

    int customer::getCodpostal() const {
        return codpostal;
    }

    void customer::setCodpostal(int codpostal) {
        customer::codpostal = codpostal;
    }

    customer::customer(const std::string &nume, const std::string &prenume, const std::string &oras,
             const std::string &strada, int nrStrada, int customerid, int codpostal) {
        this->nume = nume;
        this->prenume = prenume;
        this->oras = oras;
        this->strada = strada;
        this->nrStrada = nrStrada;
        this->customerid = customerid;
        this->codpostal = codpostal;
    }

    std::ostream &operator<<(std::ostream &os, const customer &customer) {
        os << "nume: " << customer.nume << ", prenume: " << customer.prenume << ", oras: " << customer.oras
           << ", strada: " << customer.strada << ", nrStrada: " << customer.nrStrada << ", customerid: "
           << customer.customerid << ", codpostal: " << customer.codpostal;
        return os;
    }