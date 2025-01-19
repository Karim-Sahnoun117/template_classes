#include"employe.h"
#include "base.h"
#include <vector>
#include <iostream>
#include "gestion.h"
using namespace std ;
template<typename T,typename S,typename G,typename F>
void gestion<T, S, G, F> :: storage(employe<T,S,G,F> &obj){
    base <T,S>* ptr = new employe<T,S,G,F>(obj);
  tab.push_back(ptr);

}
template<typename T,typename S,typename G,typename F>
void gestion<T, S, G, F>::affiche()const{
for (auto & d : tab)
    {
    d->affiche();
    }

}


