#include <string>
#include "chambre.h"
#include <vector>


class Hotel
{
private :
    static int _debutId;
    int _id;
    std::string _nom;
    std::string _ville;
	std::vector<Chambre> _chambres; 
public :
    Hotel(std::string nom,std::string ville);
    int getID() const;
    std::string getNom() const;
    std::string getVille() const;
    Chambre getChambre(int id);
    void afficheChambres();
    bool addChambre(std::string type, float prix);
    bool supChambre(int id);
};

std::ostream& operator<<(std::ostream& os, const Hotel& hotel);