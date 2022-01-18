#include <string>
#include <vector>


class Client
{
private :
    int _id;
    std::string _prenom;
    std::string _nom;

public :
    Client(int id,std::string prenom,std::string nom);
    int getID() const;
    std::string getPrenom() const;
    std::string getNom() const;
    void afichheCLient(std::vector<Client> clients);
 

};

std::ostream& operator<<(std::ostream& os, const Client& client);
void recherche(std::vector<Client> _clients, std::string recherche);