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
void rechercheClient(std::vector<Client> &clients); // Rechercher client et si client inconnu, création de client
void afficheClient(std::vector<Client> clients);                     // Affiche tous les clients du vecteur