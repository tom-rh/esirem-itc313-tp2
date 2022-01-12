#include <string>


class Chambre
{
private :
    int _id;
    int _prix;
    std::string _type;

   

public :
    Chambre(int num,std::string type,int prix);
 
    int getID() const;
    int getPrix() const;
    void setPrix(double new_prix);
    std::string getType() const;
    

};

std::ostream& operator<<(std::ostream& os, const Chambre& client);