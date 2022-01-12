#include "chambre.h"
#include <iostream>

Chambre::Chambre(int ID,std::string type, float prix): _id(ID), _type(type), _prix(prix) {

}


int Chambre::getID() const{

    return _id;
}

std::string Chambre::getType() const {

    return _type;
}

float Chambre::getPrix() const {

    return _prix;
}

void Chambre::setPrix(float new_prix)
{
    _prix=new_prix;
}

std::ostream& operator<<(std::ostream& os, const Chambre& chambre){
    os << chambre.getID() << "-" << chambre.getType() << "-" << chambre.getPrix() << std::endl;
    return os;
    
}
