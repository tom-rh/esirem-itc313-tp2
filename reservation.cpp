#include "reservation.h"

int Reservation::_debutId=1;

Reservation::Reservation (Client client, Hotel hotel, Chambre chambre,date::Date debut,int nuit):_id(_debutId++), _client(client), _hotel(hotel), _chambre(chambre), _debut(debut), _nb_nuit(nuit)
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

void Reservation::ModifSejour(date::Date newdate,int newnuit)
{

    _debut=newdate;
    _nb_nuit=newnuit;

}


std::ostream& operator<<(std::ostream& os, const Reservation& reserv){

   Client client=reserv.getClient();
   Chambre chambre=reserv.getChambre();
   Hotel hotel=reserv.getHotel();
   date::Date date=reserv.getDate();
 

    os <<"Voici le resume de votre reservation : "<< std::endl 
    <<"votre ID de reservation est : " << reserv.getID()  << std::endl 
    <<"Vous etes le client : " << client 
    <<"Vous avez reserve dans l'hotel : " << hotel 
    <<"la chambre  : " << chambre 
    <<"le debut de votre sejours est le : " << date::toString(date) << std::endl
    <<"pour " << reserv.getNuit() << " nuit(s) " << std::endl
    <<"le tout pour un rpix total de " << reserv.getTotal() << " euros" << std::endl;

    return os;
    
}