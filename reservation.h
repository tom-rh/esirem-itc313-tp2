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
    int _nbNuit;
    float _total;
    Client _client;
    Hotel _hotel;
    Chambre _chambre;
    int _id;
	bool statut;
public :
    Reservation (Client client, Hotel hotel, Chambre chambre, date::Date debut, int nuit);
    int getNuit() const;
    Client getClient() const;
    date::Date getDate() const;
    float getTotal() const;
    Hotel getHotel() const;
    Chambre getChambre() const;
    void ModifSejour();
    int getID() const;
    void afficheReservation();
    void modifReservation(Client client, Hotel hotel, Chambre chambre,date::Date debut,int nuit);
};
std::ostream& operator<<(std::ostream& os, const Reservation& reservation);
void afficheReservation(std::vector<Reservation> reservations);
void rechercheReservation(std::vector<Reservation> reservations, int id);
void afficheReservationClient(std::vector<Reservation> reservations,int id);

