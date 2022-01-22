#pragma once
#include "reservation.h"
#include <string>

int main()
{
	date::Date d1(12,12,2022);
	std::vector<Reservation> tabReserv;

	Hotel h1("hotel1","Dijon");

	h1.addChambre("single",100);
	h1.addChambre("single",100);
	h1.addChambre("single",100);
	h1.addChambre("double",150);
	h1.addChambre("double",150);
	h1.addChambre("double",150);
	h1.addChambre("double",150);
	h1.addChambre("double",150);
	h1.addChambre("suite",500);
	h1.addChambre("suite",500);

	std::cout << h1.getChambre(1) << std::endl;;
	std::cout << h1 << std::endl;

	std::vector<Client> _clients; 
	_clients.push_back(Client ("Quentin","Filleule"));
	_clients.push_back(Client ("Achil","Isnar"));
	_clients.push_back(Client ("Arthur","Marte"));

	Client cl1 = _clients[1];
	std::cout << cl1 << std::endl;

	std::cout << "Nous allons rechercher un client !" << std::endl;
	rechercheClient(_clients);
	std::cout << std::endl;

	Chambre ch1=h1.getChambre(1);
	Chambre ch2=h1.getChambre(2);
	Chambre ch3=h1.getChambre(3);
	Chambre ch4=h1.getChambre(4);
	Chambre ch5=h1.getChambre(5);

	date::Date d2(31,3,2022);

	Reservation reserv1(cl1,h1,ch1,d2,10);
	tabReserv.push_back(reserv1);
	std::cout<< reserv1;

	Reservation reserv2(cl1,h1,ch2,d2,10);
	tabReserv.push_back(reserv2);

	Reservation reserv3(cl1,h1,ch3,d2,10);
	tabReserv.push_back(reserv3);

	Reservation reserv4(cl1,h1,ch4,d2,10);
	tabReserv.push_back(reserv4);

	Reservation reserv5(cl1,h1,ch5,d2,10);
	tabReserv.push_back(reserv5);

	date::Date d3(1,10,2022);
	std::cout << "Nous allons rechercher les disponibilités correspondant à votre demande :" << std::endl;
	disponibilite(h1.getChambres(), tabReserv, d3, 4);

	return 0;
}

