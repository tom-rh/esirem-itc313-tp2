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
    void afficheChambres();                                          //affiche toutes les chambres de l'hotel
    bool addChambre(std::string type, float prix);                   //ajouter une chambre dans l'hotel
    bool supChambre(int id);                                         //supprimer une chambre dans l'hotel
	std::vector<Chambre> getChambres() const;                        //avoir le vecteur de chambres de cet hotel
};

std::ostream& operator<<(std::ostream& os, const Hotel& hotel);