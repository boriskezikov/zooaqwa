//
// Created by Kezikov Boris  on 2019-01-17.
//

#ifndef ZOO_AQWA_PLANKTON_H
#define ZOO_AQWA_PLANKTON_H

#include "Creature.h"


class plankton: virtual public Creature {
private:
    std::string name;
public:
    bool _eat() override;





};


#endif //ZOO_AQWA_PLANKTON_H
