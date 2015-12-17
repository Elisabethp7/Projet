/* 
 * File:   RobotQuestion.cpp
 * Author: Bienvenue
 * 
 * Created on 14 décembre 2015, 09:55
 */

#include "RobotQuestion.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

RobotQuestion::RobotQuestion(Plateau* plateau, int pions):JoueurQuestion(plateau, pions) {
    cout << "creation robotquestion" << endl;
}

RobotQuestion::~RobotQuestion() {
    cout << "destruction robotquestion" << endl;
}

bool RobotQuestion::question(){
    srand (time(NULL));
    int alea = rand() % 2;
    switch(alea){
        case 0 : return true;
        case 1 : return false;
    }
}

int RobotQuestion::choixPions(){
    int choix = 1;
    if(nombrepions == 1){
        return choix;
    }
    else{
        srand (time(NULL));
        return (rand()%nombrepions + 1);
    }
}
