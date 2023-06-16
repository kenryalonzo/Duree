#include <iostream>
#include "Duree.hpp"

using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{

} 

bool Duree::estEgal(Duree const& b) const
{
    return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);
}

bool Duree::estDifferent(Duree const& b) const
{
    return ((m_heures != b.m_heures) || (m_heures == b.m_heures && m_minutes != b.m_minutes) || (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes != b.m_secondes));
}

bool Duree::estPlusPetitQue(Duree const& b)
{
    return ((m_heures < b.m_heures) || (m_heures == b.m_heures && m_minutes < b.m_minutes) || (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes < b.m_secondes));   
}

Duree& Duree::operator+=(const Duree &duree2)
{
    m_secondes += duree2.m_secondes;
    m_minutes += m_secondes / 60;
    m_secondes %= 60;

    m_minutes += duree2.m_minutes;
    m_heures += m_minutes / 60;
    m_minutes %= 60;

    m_heures += duree2.m_heures;

    return *this;
}

void Duree::afficher() const
{
    cout << m_heures << "h " << m_minutes << "m " << m_secondes << "s." << endl;
}

bool operator==(Duree const& a, Duree const& b)
{
   return a.estEgal(b); 
}

bool operator!=(Duree const& a, Duree const& b)
{
    return not (a == b);
}

bool operator<(Duree const& a, Duree const& b)
{
    return a < b;
}

Duree operator+(Duree const& a, Duree const& b)
{
    Duree copie(a);
    copie += b;
    return copie;
}