#include "reservation.h"

int Reservation::_debutId=1;

Reservation::Reservation (Client client, Hotel hotel, Chambre chambre,date::Date debut,int nuit):_id(_debutId++), _client(client), _hotel(hotel), _chambre(chambre), _debut(debut), _nb_nuit(nuit)
{

}

int Reservation::getNuit() const
{
    return _nb_nuit;
}

Client Reservation::getClient() const
{
    return _client;
}

date::Date Reservation::getDate() const
{
    return _debut;
}

float Reservation::getTotal() const
{
    return _chambre.getPrix()*_nb_nuit;
}

Hotel Reservation::getHotel() const
{
    return _hotel;
}

Chambre Reservation::getChambre() const
{
    return _chambre;
}


int Reservation::getID() const
{
    return _id;
}



void Reservation::ModifSejour()
{

bool test = false;
date::Date date;
int jour,mois,annee;

do

{
    std::cout <<"enter un jour" << std::endl;
    std::cin >> jour ;

    std::cout <<"enter un mois" << std::endl;
    std::cin >> mois ;

    std::cout <<"enter une annee" << std::endl;
    std::cin >> annee;

    
    test = date::isDate(jour,mois);
    if(test==false)
    {
        std::cout <<"date invalide " << std::endl;
    }
   
}while(test == false);

date = date::Date(jour,mois,annee);
    _debut=date;


int nuits;
bool tnuit = false;

do
{

    std::cout <<"enter un nouveau nombre de nuit" << std::endl;
    std::cin >> nuits;  
    
    if(nuits <= 0)
    {
        tnuit = false;
        std::cout <<"nombre de nuit invalide" << std::endl;
    }

    else
    tnuit = true;

} while (tnuit==false);

    _nb_nuit=nuits;

   
}



void Reservation::modifReserv(Client client, Hotel hotel, Chambre chambre,date::Date debut,int nuit)
{

_client=client;
_hotel=hotel;
_chambre=chambre;
_debut=debut;
_nb_nuit=nuit;

}



void afficheReserv(std::vector<Reservation> reservs)
{
    for(auto i= reservs.begin() ; i != reservs.end() ; i++)
        {
           std::cout << (*i);
           
        }
}


void rechercheReserv(std::vector<Reservation> reservs ,int id)

{



int testID;
for(auto i= reservs.begin() ; i != reservs.end() ; i++)
        {
           testID=(*i).getID();

           if(id == testID)
           {
               std::cout << (*i) <<std::endl;
           }
           
        }

}



void reservClient(std::vector<Reservation> reservs, int id)
{
    
for(auto i= reservs.begin() ; i != reservs.end() ; i++)
        {
           Client client=(*i).getClient();

           if(client.getID()==id)
           {
               std::cout << (*i);
           }
           
        }

}


std::ostream& operator<<(std::ostream& os, const Reservation& reserv){

   Client client=reserv.getClient();
   Chambre chambre=reserv.getChambre();
   Hotel hotel=reserv.getHotel();
   date::Date date=reserv.getDate();
 

    os <<"Voici le resume de votre reservation : "<< std::endl 
    <<"votre ID de reservation est : " << reserv.getID()  << std::endl 
    <<"Vous etes le client : " << client 
    <<"Vous avez reserve dans l'hotel : " << hotel 
    <<"la chambre  : " << chambre 
    <<"le debut de votre sejours est le : " << date::toString(date) << std::endl
    <<"pour " << reserv.getNuit() << " nuit(s) " << std::endl
    <<"le tout pour un rpix total de " << reserv.getTotal() << " euros" << std::endl;

    return os;
    
}