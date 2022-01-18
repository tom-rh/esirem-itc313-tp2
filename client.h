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
    void recherche(std::vector<Client> _clients, std::string recherche);

};

std::ostream& operator<<(std::ostream& os, const Client& client);