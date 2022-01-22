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
    bool _active;

public :

    Reservation (Client client, Hotel hotel, Chambre chambre,date::Date debut,int nuit);
    int getNuit() const;
    Client getClient() const;
    date::Date getDate() const;
    float getTotal() const;                                                                 // prix du sejour
    Hotel getHotel() const;                                                                 // return l'hotel de la reservation
    Chambre getChambre() const;                                                             // return la chambre de la reservation
    void modifSejour();                                                                     // Modifie la dates + nb de nuits du sejour
    int getID() const; 
    bool getStatut() const;                                                                 
    void modifReserv(Client client, Hotel hotel, Chambre chambre);                          // Modifi client + hotel + chambres du sejours
	void anulReserv();                                                                      // annule une reservation

};

void afficheReserv(std::vector<Reservation> reservations);                                  //affiche toutes les reservations
void rechercheReserv(std::vector<Reservation> reservations, int id);                        // recherche de reservation par ID
void reservClient(std::vector<Reservation> reservations, int id);                           // recherche les réservation d'un client
int disponibilite(std::vector<Chambre> chambres,std::vector<Reservation> reservations, date::Date dateDebut, int nombreNuits); // recherche si une chambre d'un certain type est disponible pour le sejour indiqué
std::ostream& operator<<(std::ostream& os, const Reservation& reservation);