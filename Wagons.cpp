#include "Wagons.h"



Wagons::Wagons() {}

Wagons::~Wagons() {
    for (auto wagon : wagons)
        delete wagon;
}

Wagons* Wagons::addWagon(AbstractWagon* wagon) {
    wagons.push_back(wagon);
    return this;
}

void Wagons::print(std::ostream& os) const {
    for (size_t i = 0; i < this->wagons.size(); ++i) {
        if (i > 0) os << "-";
        os << *wagons.at(i);
    }
}
