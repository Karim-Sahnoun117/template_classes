#include "employe.h"
#include "base.h"
#include <iostream>
using namespace std ;

template<typename T,typename S,typename F,typename G>
void employe<T,S,F,G> :: affiche()const {

cout<<"le nom de l'employe est : "<< this->name <<endl;
cout<<"l'ID l'employe est : "<< this->ID<<endl;
cout<<"le salaire est egale : "<<this->salaire<<endl;
cout<<"le nombre d'heures : "<<this->salaire<<endl;

}
