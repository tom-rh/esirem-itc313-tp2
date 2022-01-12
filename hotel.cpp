   #include "hotel.h"
   #include <string>
   #include <iostream>
   
    Hotel::Hotel(std::string ID,std::string nom,std::string ville): _ID(ID), _nom(nom), _ville(ville){


    }

    std::string Hotel::getID() const{
        return _ID;
    }

    std::string Hotel::getNom() const{
        return _nom;
    }


    std::string Hotel::getVille() const{
        return _ville;
    }


    void Hotel::AffichChambre(){


        for(auto i= _chambres.begin() ; i != _chambres.end() ; i++)
        {
           std::cout << (*i);
           
        }
    }


    bool Hotel::addChambre(int ID,std::string type, float prix){
       
        _chambres.push_back(Chambre (ID,type,prix));

        return true;
    }


    bool Hotel::supChambre(int ID){

              for(auto i= _chambres.begin() ; i != _chambres.end() ; i++)
        {
           auto a =(*i).getID();
           if(a==ID)
           {
               _chambres.erase(i);
           }
        }

    }


    std::ostream& operator<<(std::ostream& os, const Hotel& hotel){
    os << hotel.getID() << "-" << hotel.getNom() << "-" << hotel.getVille() << std::endl;
    return os;
    
}