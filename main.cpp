#pragma once
#include "date.h"
//#include "hotel.h"
//#include "client.h"
#include "reservation.h"
#include <string>

int main()
{
date::Date d1(12,12,2022);

Hotel h1("14","hotel1","Dijon");

h1.addChambre(1,"single",100);
h1.addChambre(2,"single",100);
h1.addChambre(3,"single",100);
h1.addChambre(4,"double",150);
h1.addChambre(5,"double",150);
h1.addChambre(6,"double",150);
h1.addChambre(7,"double",150);
h1.addChambre(8,"double",150);
h1.addChambre(9,"suite",500);
h1.addChambre(10,"suite",500);

 std::vector<Client> _clients; 
 _clients.push_back(Client (1,"kinkin","fifi"));
 _clients.push_back(Client (2,"akil","isna"));
 _clients.push_back(Client (3,"arthur","grobaij"));
 _clients.push_back(Client (4,"rom","canard"));



Client cl1(14,"kinkin","fifi");

h1.AffichChambre();

Chambre ch1=h1.getChambre(3);

std::cout<< ch1;





Reservation reserv1(1,cl1,h1,ch1,d1,10);

std::cout<< reserv1;


}

