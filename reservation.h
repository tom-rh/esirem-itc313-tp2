#pragma once

#include <iostream>
#include <string>
#include "hotel.h"
#include "client.h"
#include "date.h"


class Reservation
{

private :
    static int _debutId;
    date::Date _debut;
    int _nb_nuit;
    float _total;
    Client _client;
    Hotel _hotel;
    Chambre _chambre;
    int _id;

public :

    Reservation (Client client, Hotel hotel, Chambre chambre,date::Date debut,int nuit);
    int getNuit() const;
    Client getClient() const;
    date::Date getDate() const;
    float getTotal() const;
    Hotel getHotel() const;
    Chambre getChambre() const;
    void ModifSejour();
    int getID() const;
    void afficheReserv();

 

};
std::ostream& operator<<(std::ostream& os, const Reservation& reserv);
void afficheReserv(std::vector<Reservation> reservs);
void rechercheReserv(std::vector<Reservation> reservs, int id);

