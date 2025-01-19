#include "gestion.h"
#include "employe.h"
#include<iostream>
int main() {
    gestion<string, int, double, int> g;

    employe<string, int, double, int> emp1("Alice", 1, 50000.0, 40);
    employe<string, int, double, int> emp2 ("Bob", 2, 60000.0, 35);

    g.storage(emp1);
    g.storage(emp2);

    g.affiche();



    return 0;
}


