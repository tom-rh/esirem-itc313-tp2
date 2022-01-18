#include <string>


class Chambre
{
private :
    static int _debutId;
    int _id;
    float _prix;
    std::string _type;

   

public :
    Chambre(std::string type,float prix);
 
    int getID() const;
    float getPrix() const;
    void setPrix(float new_prix);
    std::string getType() const;
    

};

std::ostream& operator<<(std::ostream& os, const Chambre& chambre);