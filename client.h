#include <string>
#include <vector>


class Client
{
private :
    static int _debutId;
    int _id;
    std::string _prenom;
    std::string _nom;

public :
    Client(std::string prenom,std::string nom);
    int getID() const;
    std::string getPrenom() const;
    std::string getNom() const;
    
 

};

std::ostream& operator<<(std::ostream& os, const Client& client);
void recherche(std::vector<Client> &clients, std::string recherche);
void afficheClient(std::vector<Client> clients);