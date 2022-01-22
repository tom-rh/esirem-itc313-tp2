#include "reservation.h"

int Reservation::_debutId=1;

Reservation::Reservation (Client client, Hotel hotel, Chambre chambre,date::Date debut,int nuit):_id(_debutId++), _client(client), _hotel(hotel), _chambre(chambre), _debut(debut), _nb_nuit(nuit) , _active(true)
{

}

int Reservation::getNuit() const
{
    return _nb_nuit;
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
    return _chambre.getPrix()*_nb_nuit;
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

bool Reservation::getStatut() const
{
	return _active;
}

void Reservation::modifSejour()
{
	bool test = false;
	date::Date date;
	int jour,mois,annee;

	do
	{
		std::cout <<"Enter un jour :" << std::endl;
		std::cin >> jour ;

		std::cout <<"Enter un mois :" << std::endl;
		std::cin >> mois ;

		std::cout <<"Enter une annee :" << std::endl;
		std::cin >> annee;

		test = date::isDate(jour,mois);
		if (test == false)
		{
			std::cout <<"Date invalide !" << std::endl;
		}
	
	} while (test == false);

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

	_nb_nuit=nuits;
}



void Reservation::modifReserv(Client client, Hotel hotel, Chambre chambre)
{
	_client = client;
	_hotel =  hotel;
	_chambre = chambre;
}



void afficheReserv(std::vector<Reservation> reservations)
{
    for (Reservation reservation : reservations)
    {
		if (reservation.getStatut() == true)
    	std::cout << reservation;
    }
}


void rechercheReserv(std::vector<Reservation> reservations, int id)
{
	int testID;
	for (Reservation reservation : reservations)
	{
        testID = reservation.getID();
        if(id == testID)
            std::cout << reservation << std::endl;
    }
}



void reservClient(std::vector<Reservation> reservations, int id)
{
	for(Reservation reservation : reservations)
    {
        Client client = reservation.getClient();
        if(client.getID()==id)
            std::cout << reservation;
    }
}


int disponibilite(std::vector<Chambre> chambres,std::vector<Reservation> reservations, date::Date dateDebut, int nombreNuits)
{
	std::string type;
	std::cout << "Entrer un type :"<< std::endl;
	std::cin >> type;

	date::Date dateFin = dateDebut + nombreNuits;
	date::Date dateFinReservation;
	int reservee;

	for(Chambre chambre : chambres)
	{
		if (chambre.getType() == type)
		{
			for (Reservation reservation : reservations)
			{
				for (Chambre chambre2  : chambres)
				{
					if (reservation.getChambre().getID() == chambre2.getID())
					{
						dateFinReservation = reservation.getDate() + nombreNuits;
						if (dateFin < reservation.getDate() || dateDebut > dateFinReservation)
						{
							std::cout << "Pour votre voyage, voici l'identifiant de la premiere chambre disponible : "<< std::endl;
							return chambre2.getID();
						}
					}
					else
					{
						reservee++;
					}
				}
				if (reservee == 0)
				{
					std::cout << reservation.getChambre().getID() << chambre.getID() << std::endl;
					std::cout << "Cette chambre n'est pas dans le fichier de reservation, elle est donc disponible !" << std::endl;
					std::cout << "Pour votre voyage, voici l'identifiant de la premiere chambre disponible : "<< std::endl;
					return chambre.getID();		// ID de la chambre disponible
				}
			}
		}
	}
	return 0; // Aucune chambre trouvée
}


std::ostream& operator<<(std::ostream& os, const Reservation& reservation)
{
    os << "Voici le resume de votre reservation :"<< std::endl;
    os << "votre ID de reservation est : " << reservation.getID()  << std::endl;
    os << "Vous etes le client : " << reservation.getClient() << std::endl;
    os << "Vous avez reserve dans l'hotel : " << reservation.getHotel() << std::endl;
    os << "Vous avez reserve une chambre  : " << reservation.getChambre() << std::endl;
    os << "Le debut de votre sejours est le : " << date::toString(reservation.getDate()) << std::endl;
    os << "Celui-ci durera " << reservation.getNuit() << " nuit(s)." << std::endl;
    os << "Le tout pour un prix total de " << reservation.getTotal() << " euros" << std::endl;
    return os;
    
}