#include <iostream>
#include "jeu.h"

using namespace std;

jeu :: jeu() : m_valide(0), ess(3), i(0)
{

} 

jeu :: ~jeu(){

}


int jeu :: aleatoire()
{
    y = rand() % 11;           // nbre aleatoire entre 0 et 10

    return y;

}


int jeu :: essai()
{
    return ess--;
}

int jeu :: incrementation()
{
    return i++;
} 

int jeu :: valeur_de_i()
{
    return i;
}


void jeu :: application(int x)
{
    int a=1,b;
    while(a!=0 || m_valide != 0)
    {
         b=jeu.incrementation;
        switch(x)
        {
            case jeu.get_y:
                m_valide = true ;
                jeu.affichage(m_valide);
                break;

            default :
                 m_valide = false ; 
                jeu.affichage(m_valide);
                a=jeu.essai;
                if(jeu.valeur_de_i == 3)
                {
                    cout << "Petite aide " << endl;
                    cout << "La bonne valeur est dans l intervalle suivante :  " << endl;
                    jeu.intervalle;
                }
                cout << "Entrer votre valeur : " << endl;
                cin >> x;
        }


    }
}

void jeu :: affichage(bool m_valide) const
{
    cout << "nombre de vie restant = " << ess << endl;

    if( m_valide == true )
    {
        switch(jeu.valeur_de_i)
        {
            case 1:
                cout << "No comment, you got me :(" << endl ;
                break;

            case 2 :
                cout << "Paas maal " << endl;
                break;

            case 3 :
                cout << "C etait limite huh " << endl;
                break;
        }
    }

    else
    {
        switch(jeu.valeur_de_i)
        {
            case 1:
                cout << " AH AH AH , allez one more" << endl ;
                cout << " Stress pas " << endl ;
                break;

            case 2 :
                cout << " Pk tu stress ?" << endl;
                cout << " Prends un souffle ." << endl ;
                break;

            case 3 :
                cout << " Bah voila, C PERDU . " << endl;
                cout << " Tu stressais" << endl ;
                break;
        }
    }

}