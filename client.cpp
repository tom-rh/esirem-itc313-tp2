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



void Client::recherche(std::vector<Client> _clients, std::string recherche)
{
    bool creation;

 for(auto i= _clients.begin() ; i != _clients.end() ; i++)
        {
            std::string comp=(*i).getNom();
            if(comp==recherche)
            {
                std::cout<< (*i);
                creation=false;
            }
           
           
        }
 if(creation)
 {
     std::string prenom;
     std::cout<< "entre un prenom"<< std::endl;
     std::cin >> prenom;
     int ID;
    std::cout<< "entre une ID"<< std::endl;

     _clients.push_back(Client (ID,prenom,recherche));
     std::cout<< "votre ouveau client est bien ajoute"<< std::endl;
 }

}



std::ostream& operator<<(std::ostream& os, const Client& client){
    os << client.getID() << "-" << client.getPrenom() << "-" << client.getNom() << std::endl;
    return os;
    
}