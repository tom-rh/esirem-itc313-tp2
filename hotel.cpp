#include "hotel.h"
#include <string>
#include <iostream>

int Hotel::_debutId=1;

Hotel::Hotel(std::string nom,std::string ville): _id(_debutId++), _nom(nom), _ville(ville)
{
}

int Hotel::getID() const
{
	return _id;
}

std::string Hotel::getNom() const
{
	return _nom;
}

std::string Hotel::getVille() const
{
	return _ville;
}

void Hotel::afficheChambres()
{
	for(auto i= _chambres.begin() ; i != _chambres.end() ; i++)
	{
		std::cout << (*i);
	}
}

bool Hotel::addChambre(std::string type, float prix)
{
	_chambres.push_back(Chambre (type,prix));
	return true;
}

bool Hotel::supChambre(int id)
{
	for(auto i= _chambres.begin() ; i != _chambres.end() ; i++)
	{
		auto a =(*i).getID();
		if(a == id)
			_chambres.erase(i);
			return true;
	}
}

Chambre Hotel::getChambre(int id)
{
	for(auto i= _chambres.begin() ; i != _chambres.end() ; i++)
	{
		if((*i).getID()==id)
			return (*i);
	}
}

std::vector<Chambre> Hotel::getChambres() const
{
	return _chambres;
}

std::ostream& operator<<(std::ostream& os, const Hotel& hotel)
{
	os << "Hotel :" << std::endl;
	os << "ID : " << hotel.getID() << " - Nom : " << hotel.getNom() << " - Ville : " << hotel.getVille() << std::endl;
	return os;
}