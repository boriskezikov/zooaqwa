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
bool Creature::_live() {

}
bool Creature::_sex() {}

std::vector<int> Creature::_move() {

}
void Creature::_objectInfo() {
    std::cout << "Is hungry - " << hungry << std::endl;
    std::cout << "Age " << age << std::endl;
    std::cout << "Sex satisfaction" << sex_satisfaction << std::endl;
    std::cout << "OX - " << current_coordinats[0] << " OY - " << current_coordinats[1] << " OZ - " << current_coordinats[2]<<std::endl;

}
