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



void recherche(std::vector<Client> clients, std::string recherche)
{
    bool creation = true;

 for(auto i= clients.begin() ; i != clients.end() ; i++)
        {
            std::string comp=(*i).getNom();
            if(comp==recherche)
            {
                std::cout<< (*i);
                creation=false;
            }
           
           
        }
 if(creation==true)
 {
     std::string prenom;
     std::cout<< "entre un prenom"<< std::endl;
     std::cin >> prenom;
     int ID;
    std::cout<< "entre une ID"<< std::endl;
    std::cin >> ID;

     clients.push_back(Client (ID,prenom,recherche));
     std::cout<< "votre nouveau client est bien ajoute"<< std::endl;
 }

}


void Client::afichheCLient(std::vector<Client> clients)
{
    for(auto i= clients.begin() ; i != clients.end() ; i++)
        {
           std::cout << (*i);
           
        }
}



std::ostream& operator<<(std::ostream& os, const Client& client){
    os << client.getID() << "-" << client.getPrenom() << "-" << client.getNom() << std::endl;
    return os;
    
}