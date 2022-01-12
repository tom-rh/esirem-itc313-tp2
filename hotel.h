#include <string>
#include "chambre.h"
#include <vector>


class Hotel
{
private :

    std::vector<Chambre> chambres; // chambres.erase(i)
    std::string _ID;
    std::string _nom;
    std::string _ville;
   

public :

    Hotel(std::string ID,std::string nom,std::string ville, std::vector<Chambre> chambres);

    std::string getID() const;
    std::string getNom() const;
    std::string getVille() const;
    std::vector<Chambre> addChambre();
    std::vector<Chambre> supChambre();
 

};

std::ostream& operator<<(std::ostream& os, const Chambre& client);