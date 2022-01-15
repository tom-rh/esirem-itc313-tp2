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

h1.addChambre(1,"lux",500);
h1.addChambre(2,"norm",50);
h1.addChambre(3,"delux premium ",5000);

h1.AffichChambre();
h1.supChambre(1);

h1.AffichChambre();
Chambre ch1=h1.getChambre(3);

std::cout<< ch1;

Client cl1(14,"kinkin","fifi");

Reservation reserv1(1,cl1,h1,ch1,d1,10);

std::cout<< reserv1;


}

