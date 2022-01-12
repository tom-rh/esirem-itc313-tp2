#include <iostream>
#include <string>
#include "hotel.h"
#include "chambre.h"
#include "client.h"
#include "date.h"



class Reservation
{
    
private :

    date::Date _debut;
    int _nb_nuit;
    double _total;
    int _IDclient;
    int _IDhotel;
    int _IDchambre;
    int _id;

public :

   Reservation (int id,int IDclient, int IDhotel, int IDchambre,date::Date debut,int nuit);
    void getNuit();
    void getClient();
    void getDate();
    void getTotal();
    void getHotel();
    void getChambre();
    void ModifSejour();
    void getID();

};

std::ostream& operator<<(std::ostream& os, const Reservation& reserv);