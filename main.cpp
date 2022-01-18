#pragma once
#include "date.h"
//#include "hotel.h"
//#include "client.h"
#include "reservation.h"
#include <string>

int main()
{
date::Date d1(12,12,2022);

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



Client cl1("kinkin","fifi");

h1.AffichChambre();

Chambre ch1=h1.getChambre(3);

std::cout<< ch1;





Reservation reserv1(cl1,h1,ch1,d1,10);

std::cout<< reserv1;


}

