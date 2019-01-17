//
// Created by Kezikov Boris  on 2019-01-17.
//

#include "Creature.h"
#include <random>

Creature::Creature() {
    hungry = false;
    age = 0;
    sex_satisfaction = false;

    for (int i = 0 ; i<3; i++){
        current_coordinats.push_back(rand()%(1000));}
    rank = 0;
}