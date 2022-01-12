#include <string>


class Chambre
{
private :
    int _num;
    int _prix;
    std::string _type;

   

public :
    Chambre(int num,std::string type,int prix);
 
    int getNum() const;
    int getPrix() const;
    void setPrix(double new_prix);
    std::string getType() const;
    

};


std::ostream& operator<<(std::ostream& os, const Chambre& client);