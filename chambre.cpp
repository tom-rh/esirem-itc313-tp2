#include "chambre.h"
#include <iostream>

Chambre::Chambre(int num,std::string type, int prix): _num(num), _type(type), _prix(prix) {

}


int Chambre::getNum() const{

    return _num;
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
    os << client.getNum() << "-" << client.getType() << "-" << client.getPrix() << std::endl;
    return os;
    
}
