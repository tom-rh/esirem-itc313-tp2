#include "chambre.h"
#include <iostream>

Chambre::Chambre(int ID,std::string type, int prix): _id(ID), _type(type), _prix(prix) {

}


int Chambre::getID() const{

    return _id;
}

std::string Chambre::getType() const {

    return _type;
}

int Chambre::getPrix() const {

    return _prix;
}

void Chambre::setPrix(double new_prix)
{
    _prix=new_prix;
}

std::ostream& operator<<(std::ostream& os, const Chambre& client){
    os << client.getID() << "-" << client.getType() << "-" << client.getPrix() << std::endl;
    return os;
    
}
