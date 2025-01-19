#ifndef GESTION_H_INCLUDED
#define GESTION_H_INCLUDED
#include <vector>
#include "employe.h"

using namespace std;

template<typename T, typename S, typename G, typename F>
class gestion {
public:
    gestion() {}
~gestion() {
    for (auto& d : tab) {
        delete d; // Libération de la mémoire
    }
}

    vector<employe<T, S, G, F>*> tab;

    void storage(employe<T, S, G, F>& obj);
    void affiche() const;
};

#endif // GESTION_H_INCLUDED
