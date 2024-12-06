
//
// Created by riyad on 06/12/2024.
//

// Train.cpp
#include "Train.h"
Train::Train(Wagons* wagons, AbstractLocomotive* locomotive)
        : wagons(wagons), locomotive(locomotive) {}
Train::~Train() = default;
void Train::print(std::ostream& os) const {
        os << *wagons << '-' << *locomotive;
}


