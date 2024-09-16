#include <iostream>
#include "jeu.h"

using namespace std;

int main()
{
    int x;
    jeu game;

    cout << "Bonjour et bienvenue dans le jeu de J-Luc" << endl;
    cout << "Le principe est de me battre, cela en decouvrant la valeur que je choisirais aleatoirement entre 0 et 10" << endl;
    cout << "Simple non ? " << endl;
    cout << "Alors allons-y" << endl;
    cout << "J oubliais, vous avez 3 chances pour y arriver. Ca serait trop facile sinon :)" << endl;
    cout << "Bonne chance" << endl;
    cout << "Veuillez entrer une valeur entre 0 et 10" << endl;
    cin >> x;

    game.aleatoire;
    game.application;

    return 0;
}