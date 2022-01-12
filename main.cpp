#include "date.h"
#include "hotel.h"
#include <string>

int main()
{
date::Date d1(12,12,2022);

Hotel h1("14","hotel1","Dijon");

h1.addChambre(1,"lux",500);
h1.addChambre(2,"norm",50);

h1.AffichChambre();
h1.supChambre(1);

h1.AffichChambre();

}

