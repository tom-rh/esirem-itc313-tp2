#include <string>
#include "chambre.h"
#include <vector>


class Hotel
{
private :

    std::vector<Chambre> _chambres; 
    std::string _ID;
    std::string _nom;
    std::string _ville;
   

public :

    Hotel(std::string ID,std::string nom,std::string ville);

    std::string getID() const;
    std::string getNom() const;
    std::string getVille() const;
    Chambre getChambre(int id);
    void AffichChambre();
    bool addChambre(int ID,std::string type, float prix);
    bool supChambre(int ID);
 

};

std::ostream& operator<<(std::ostream& os, const Hotel& hotel);