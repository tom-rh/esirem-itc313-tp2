//Une date de début,
//Un nombre de nuits
//Un identifiant d'hôtel,
//Un identifiant de chambre,
//Un identifiant de client,
//Un montant total.

#include <iostream>
#include <string>
#include "hotel.h"
#include "chambre.h"
#include "client.h"
#include "date.h"



class Reservation
{
private :

    date::Date debut();
    int nb_nuit;
    double total;
   

public :

 

};

std::ostream& operator<<(std::ostream& os, const Reservation& reserv);