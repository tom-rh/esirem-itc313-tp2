#pragma once
#include "date.h"
//#include "hotel.h"
//#include "client.h"
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

 std::vector<Client> _clients; 
 _clients.push_back(Client ("kinkin","fifi"));
 _clients.push_back(Client ("akil","isna"));
 _clients.push_back(Client ("arthur","grobaij"));
 _clients.push_back(Client ("rom","canard"));


//std::string test = "bozo";
//recherche(_clients,test);
//afficheClient(_clients);
Client cl1("kinkin","fifi");
//h1.AffichChambre();
Chambre ch1=h1.getChambre(3);
//std::cout<< ch1;
date::Date d2(31,3,2022);

Reservation reserv1(cl1,h1,ch1,d2,10);
tabReserv.push_back(reserv1);
std::cout<< reserv1;

Reservation reserv2(cl1,h1,ch1,d2,10);
tabReserv.push_back(reserv2);
std::cout<< reserv2;

Reservation reserv3(cl1,h1,ch1,d2,10);
tabReserv.push_back(reserv3);
std::cout<< reserv3;

Reservation reserv4(cl1,h1,ch1,d2,10);
tabReserv.push_back(reserv4);
std::cout<< reserv4;

Reservation reserv5(cl1,h1,ch1,d2,10);
tabReserv.push_back(reserv5);
std::cout<< reserv5;

reserv1.ModifSejour();
std::cout<< reserv1;


}

