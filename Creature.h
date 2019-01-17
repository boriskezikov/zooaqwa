//
// Created by Kezikov Boris  on 2019-01-17.
//
#include <vector>
#include <string>
#include <queue>
#include <iostream>

#ifndef ZOO_AQWA_CREATURE_H
#define ZOO_AQWA_CREATURE_H


class Creature {
protected:
    bool hungry; // natively true

    int age;  // age = steps_count

    bool sex_satisfaction = false; // if creature wants to have sex

    std::vector<int> current_coordinats;  // contains current object coords. i+j+k

    int rang;

public:
    virtual bool _eat() = 0; // returns True if full or False if still hungry

    virtual bool _sex() = 0; // returns True if Successfully sexed or False if not

    virtual std::vector<int> _move() = 0;

    virtual bool _live () = 0;


};


#endif //ZOO_AQWA_CREATURE_H
