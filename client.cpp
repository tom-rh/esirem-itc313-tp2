#include "client.h"
#include <iostream>

Client::Client(int id,std::string prenom, std::string nom): _id(id), _prenom(prenom), _nom(nom) {

}

int Client::getID() const{

    return _id;
}

std::string Client::getPrenom() const {

    return _prenom;
}

std::string Client::getNom() const {

    return _nom;
}


std::ostream& operator<<(std::ostream& os, const Client& client){
    os << client.getID() << "-" << client.getPrenom() << "-" << client.getNom() << std::endl;
    return os;
    
}