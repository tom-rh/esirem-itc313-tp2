#include "chambre.h"
#include <iostream>

Chambre::Chambre(int num,char *type, int prix): _num(num), _type(type), _prix(prix) {

    sizeOfText = strlen( type ) + 1;
    _type = new char[ sizeOfText ];                 // Dynamically allocate the correct amount of memory.

     if( _type ){                                   // If the allocation succeeds, copy the initialization string.
      strcpy_s( _type, sizeOfText, type );
     }
}



Chambre::~Chambre() {
    int num =0;
    int prix=0;
    delete[] _type;                 //Un objet alloué à l’aide de l'opérateur new est désalloué explicitement à l’aide de delete .

}

int Chambre::getNum() const{

    return _num;
}

char Chambre::getType() const {

    return *_type;
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
