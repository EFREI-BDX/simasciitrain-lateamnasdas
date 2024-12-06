//
// Created by riyad on 06/12/2024.
//

#include "AbstractLocomotive.h"
#include <iostream>

AbstractLocomotive::AbstractLocomotive(TypeLocomotive *typeLocomotive) {
    this->typeLocomotive = typeLocomotive;

}

AbstractLocomotive::~AbstractLocomotive() {
    delete(this->typeLocomotive);
}

void AbstractLocomotive::print(std::ostream &os) const {
    os << '[' << getSymbol() << "]>";
}
