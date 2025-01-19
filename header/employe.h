#ifndef EMPLOYE_H_INCLUDED
#define EMPLOYE_H_INCLUDED
#include "base.h"

using namespace std ;
template<typename T, typename S, typename G, typename F>
class employe : public base<T, S> {
private :
    G salaire;
    F hours;
public :
     virtual ~employe() { /* Libération des ressources si nécessaire */ }
employe(T _name, S _ID ,G _salaire, F _hours):base<T, S>(_name,_ID),salaire(_salaire),hours(_hours){}
void affiche()const override ;
G get_salaire(){return salaire;}

};

#endif // EMPLOYE_H_INCLUDED
