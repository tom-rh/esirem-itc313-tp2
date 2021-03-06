#include "chambre.h"
#include <iostream>

int Chambre::_debutId=1;


Chambre::Chambre(std::string type, float prix): _id(_debutId++), _prix(prix), _type(type)
{

}

int Chambre::getID() const
{
    return _id;
}

std::string Chambre::getType() const
{
    return _type;
}

float Chambre::getPrix() const
{
	return _prix;
}

void Chambre::setPrix(float new_prix)
{
    _prix=new_prix;
}

std::ostream& operator<<(std::ostream& os, const Chambre& chambre)
{
	os << "Chambre :" << std::endl; 
    os << "ID : " << chambre.getID() << " - Type : " << chambre.getType() << " - Prix : " << chambre.getPrix() << std::endl;
    return os;
}
