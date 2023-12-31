#ifndef DEF_DUREE
#define DEF_DUREE

class Duree
{

public:
    Duree(int heures = 0, int minutes = 0, int secondes = 0);

    bool estEgal(Duree const& a) const;
    bool estDifferent(Duree const& a) const;
    bool estPlusPetitQue(Duree const& a);
    Duree& operator+=(const Duree &duree);
    void afficher() const;

private:
    int m_heures;
    int m_minutes;
    int m_secondes;
};

bool operator==(Duree const& a, Duree const& b);
bool operator!=(Duree const& a, Duree const& b);
bool operator<(Duree const& a, Duree const& b);
Duree operator+(Duree const& a, Duree const& b);

#endif