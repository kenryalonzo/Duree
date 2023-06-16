#include <iostream>
#include "Duree.hpp"

using namespace std;

int main()
{
    Duree duree1(0, 10,28), duree2(0, 15, 2);

    if (duree1 != duree2)
    {
        cout << "Les durees sont differentes !, si vous voyez ce que je dire !!" << endl;
    }
    else
    {
        cout << "Les durees sont identques !" << endl;
    } 

    Duree duree3(0, 10, 42), duree4(0, 53, 27);
    Duree resultat;

    duree3.afficher();
    cout << "+" << endl;
    duree4.afficher();

    resultat = duree3 + duree4;

    cout << "=" << endl;
    resultat.afficher();


    return 0;
}