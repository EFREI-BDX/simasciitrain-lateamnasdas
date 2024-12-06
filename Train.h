//
// Created by riyad on 06/12/2024.
//


// Train.h
// Train.h
#ifndef SIMASCIITRAIN_TRAIN_H
#define SIMASCIITRAIN_TRAIN_H

#include "ITrain.h"
#include "Wagons.h"
#include "AbstractLocomotive.h"


class Train : public ITrain {
    private:
        Wagons* wagons;
        AbstractLocomotive* locomotive;
    public:
        Train(Wagons* wagons, AbstractLocomotive* locomotive);
        ~Train() override;
        void print(std::ostream& os) const override;
    };

#endif