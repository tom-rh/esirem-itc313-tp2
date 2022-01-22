#include "client.h"
#include <iostream>

int Client::_debutId=1;

Client::Client(std::string prenom, std::string nom): _id(_debutId++), _prenom(prenom), _nom(nom)
{

}

int Client::getID() const
{
    return _id;
}

std::string Client::getPrenom() const
{
    return _prenom;
}

std::string Client::getNom() const
{
    return _nom;
}

void rechercheClient(std::vector<Client> &clients)
{
    std::cout << "Bienvenu dans le recherche de client" << std::endl;
    bool creation = true;
    std::string recherche;

    std::cout << "entrer un nom" << std::endl;
    std::cin >> recherche;

	for(Client client : clients)
        {
            std::string comp = client.getNom();
            if(comp == recherche)
            {
                std::cout << client;
                creation=false;
            }
        }
	if(creation==true)
	{
        std::cout << "Ce client n'existe pas, nous allons le creer" << std::endl;
		std::string prenom;
		std::cout<< "entre un prenom"<< std::endl;
		std::cin >> prenom;

		clients.push_back(Client (prenom,recherche));
	}

}



void afficheClient(std::vector<Client> clients)
{
    for(auto i= clients.begin() ; i != clients.end() ; i++)
    {
    	std::cout << (*i);
    }
}



std::ostream& operator<<(std::ostream& os, const Client& client){
	os << "Client :" << std::endl;
    os << "ID : " << client.getID() << " - Prenom : " << client.getPrenom() << " - Nom : " << client.getNom() << std::endl;
    return os;
}