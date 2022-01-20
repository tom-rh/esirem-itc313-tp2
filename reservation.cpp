#include "reservation.h"

int Reservation::_debutId=1;

Reservation::Reservation (Client client, Hotel hotel, Chambre chambre,date::Date debut,int nuit):_id(_debutId++), _client(client), _hotel(hotel), _chambre(chambre), _debut(debut), _nbNuit(nuit)
{

}

int Reservation::getNuit() const
{
    return _nbNuit;
}

Client Reservation::getClient() const
{
    return _client;
}

date::Date Reservation::getDate() const
{
    return _debut;
}

float Reservation::getTotal() const
{
    return _chambre.getPrix()*_nbNuit;
}

Hotel Reservation::getHotel() const
{
    return _hotel;
}

Chambre Reservation::getChambre() const
{
    return _chambre;
}

int Reservation::getID() const
{
    return _id;
}

void Reservation::ModifSejour()
{
	bool test = false;
	date::Date date;
	int jour,mois,annee;

	do
	{
		std::cout <<"enter un jour" << std::endl;
		std::cin >> jour ;

		std::cout <<"enter un mois" << std::endl;
		std::cin >> mois ;

		std::cout <<"enter une annee" << std::endl;
		std::cin >> annee;

		
		test = date::isDate(jour,mois);
		if(test==false)
		{
			std::cout <<"date invalide " << std::endl;
		}
	
	} while(test == false);

	date = date::Date(jour,mois,annee);
	_debut=date;

	int nuits;
	bool tnuit = false;

	do
	{

		std::cout <<"enter un nouveau nombre de nuit" << std::endl;
		std::cin >> nuits;  
		
		if(nuits <= 0)
		{
			tnuit = false;
			std::cout <<"nombre de nuit invalide" << std::endl;
		}

		else
		tnuit = true;

	} while (tnuit==false);

	_nbNuit=nuits;
}

void Reservation::modifReservation(Client client, Hotel hotel, Chambre chambre,date::Date debut,int nuit)
{
	_client=client;
	_hotel=hotel;
	_chambre=chambre;
	_debut=debut;
	_nbNuit=nuit;
}

void afficheReservation(std::vector<Reservation> reservations)
{
    for(Reservation reservation : reservations)
    {
    	std::cout << reservation;
    }
}

void rechercheReservation(std::vector<Reservation> reservations ,int id)
{
	for(Reservation reservation : reservations)
	{
        if(id == reservation.getID())
            std::cout << reservation <<std::endl;
    }
}

void afficheReservationClient(std::vector<Reservation> reservations, int id)
{
	for(Reservation reservation : reservations)
    {
        Client client = reservation.getClient();
        if(client.getID() == id)
            std::cout << reservation;
    }
}

void afficheReservationClient(std::vector<Reservation> reservations, std::string nom)
{
	for(Reservation reservation : reservations)
    {
        Client client = reservation.getClient();
        if(client.getNom() == nom)
            std::cout << reservation;
    }
}

std::ostream& operator<<(std::ostream& os, const Reservation& reservation)
{
    os << "Voici le resume de votre reservation : "<< std::endl;
    os << "votre ID de reservation est : " << reservation.getID()  << std::endl;
    os << "Vous etes le client : " << reservation.getClient() << std::endl;
    os << "Vous avez reserve dans l'hotel : " << reservation.getHotel() << std::endl;
    os << "la chambre  : " << reservation.getChambre() << std::endl;
    os << "le debut de votre sejours est le : " << date::toString(reservation.getDate()) << std::endl;
    os << "pour " << reservation.getNuit() << " nuit(s) " << std::endl;
    os << "le tout pour un rpix total de " << reservation.getTotal() << " euros" << std::endl;
    return os;
    
}