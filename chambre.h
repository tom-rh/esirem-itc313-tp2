#include <string>


class Chambre
{
private :
    int _num;
    int _prix;
    char *_type;
    size_t  sizeOfText;
   

public :
    Chambre(int num,char*type,int prix);
    ~Chambre();
    int getNum() const;
    int getPrix() const;
    void setPrix(double new_prix);
    char getType() const;
    

};

std::ostream& operator<<(std::ostream& os, const Chambre& client);