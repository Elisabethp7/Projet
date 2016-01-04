/*
 * File:   Humain.cpp
 * Author: Bienvenue
 *
 * Created on 30 novembre 2015, 23:34
 */

#include "Humain.h"
#include <iostream>

using namespace std;

Humain::Humain(Plateau* pla, int n, char s) : Joueur(pla,n,s) {
    cout << "creation d'un humain" << endl;
}

Humain::~Humain() {
    cout << "destruction d'un humain" << endl;
}

int Humain::choixPions(){
    int choix = 1;
    if(nombrepions == 1){
        return choix;
    }
    else{
        cout << "Avec quel pion voulez-vous jouer ? " << endl;
        cin >> choix;
        return choix;
    }
}



