#include "AbstractWagon.h"
#include "TypeWagon.h"


AbstractWagon::AbstractWagon(TypeWagon *typeWagon) {
        this->typeWagon = typeWagon;
}

char AbstractWagon::getSymbol() const {
        return typeWagon->getSymbol();
}

std::string AbstractWagon::getType() const {
        return typeWagon->getName();
}
