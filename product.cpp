#include "product.h"
product::product(){
    codProdus="";
    pret=0.0;
    cantitate=0;
}
const std::string &product::getCodProdus() const {
    return codProdus;
}

void product::setCodProdus(const std::string &codProdus) {
    product::codProdus = codProdus;
}

const std::string &product::getProducator() const {
    return producator;
}

void product::setProducator(const std::string &producator) {
    product::producator = producator;
}

const std::string &product::getSistemOperare() const {
    return sistemOperare;
}

void product::setSistemOperare(const std::string &sistemOperare) {
    product::sistemOperare = sistemOperare;
}

const std::string &product::getCuloare() const {
    return culoare;
}

void product::setCuloare(const std::string &culoare) {
    product::culoare = culoare;
}

const std::string &product::getTipIncarcare() const {
    return tipIncarcare;
}

void product::setTipIncarcare(const std::string &tipIncarcare) {
    product::tipIncarcare = tipIncarcare;
}

float product::getDimensiune() const {
    return dimensiune;
}

void product::setDimensiune(float dimensiune) {
    product::dimensiune = dimensiune;
}

float product::getGreutate() const {
    return greutate;
}

void product::setGreutate(float greutate) {
    product::greutate = greutate;
}

float product::getCapacitateBaterie() const {
    return capacitateBaterie;
}

void product::setCapacitateBaterie(float capacitateBaterie) {
    product::capacitateBaterie = capacitateBaterie;
}

float product::getPret() const {
    return pret;
}

void product::setPret(float pret) {
    product::pret = pret;
}

int product::getMemorie() const {
    return memorie;
}

void product::setMemorie(int memorie) {
    product::memorie = memorie;
}

int product::getCantitate() const {
    return cantitate;
}

void product::setCantitate(int cantitate) {
    product::cantitate = cantitate;
}


product::product(const std::string &codProdus, const std::string &producator, const std::string &sistemOperare,
                 const std::string &culoare, const std::string &tipIncarcare, float dimensiune, float greutate,
                 float capacitateBaterie, float pret, int memorie){
    this->codProdus=codProdus;
    this->producator=producator;
    this->sistemOperare=sistemOperare;
    this->culoare=culoare;
    this->tipIncarcare=tipIncarcare;
    this->dimensiune=dimensiune;
    this->greutate=greutate;
    this->capacitateBaterie=capacitateBaterie;
    this->pret=pret;
    this->memorie=memorie;
}

std::ostream &operator<<(std::ostream &os, const product &product) {
    os << "codProdus: " << product.codProdus << " producator: " << product.producator << " sistemOperare: "
       << product.sistemOperare << " culoare: " << product.culoare << " tipIncarcare: " << product.tipIncarcare
       << " dimensiune: " << product.dimensiune << " greutate: " << product.greutate << " capacitateBaterie: "
       << product.capacitateBaterie << " pret: " << product.pret << " memorie: " << product.memorie;
    return os;
}
//Constructorul de copiere:
product::product(const product& cc){
    this->codProdus=cc.codProdus;
    this->producator=cc.producator;
    this->sistemOperare=cc.sistemOperare;
    this->culoare=cc.culoare;
    this->tipIncarcare=cc.tipIncarcare;
    this->dimensiune=cc.dimensiune;
    this->greutate=cc.greutate;
    this->capacitateBaterie=cc.capacitateBaterie;
    this->pret=cc.pret;
    this->memorie=cc.memorie;
}

//Operatorul = :
product& product::operator = (const product& op) {
    this->codProdus=op.codProdus;
    this->producator=op.producator;
    this->sistemOperare=op.sistemOperare;
    this->culoare=op.culoare;
    this->tipIncarcare=op.tipIncarcare;
    this->dimensiune=op.dimensiune;
    this->greutate=op.greutate;
    this->capacitateBaterie=op.capacitateBaterie;
    this->pret=op.pret;
    this->memorie=op.memorie;
}


//Destructor:
product::~product() = default;