#include <string>
#include "chambre.h"
#include <vector>


class Hotel
{
private :
    static int _debutId;
    std::vector<Chambre> _chambres; 
    int _id;
    std::string _nom;
    std::string _ville;
public :
    Hotel(std::string nom,std::string ville);
    int getID() const;
    std::string getNom() const;
    std::string getVille() const;
    Chambre getChambre(int id);
    void AffichChambre();
    bool addChambre(std::string type, float prix);
    bool supChambre(int id);
};

std::ostream& operator<<(std::ostream& os, const Hotel& hotel);