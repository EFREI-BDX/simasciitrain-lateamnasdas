//
// Created by riyad on 06/12/2024.
//

#include "UtilityWagon.h"


UtilityWagon::UtilityWagon()
: AbstractWagon(new TypeWagon(TypeWagon::UTILITY)) {}

void UtilityWagon::print(std::ostream& os) const {
    os << '['<< getSymbol() << ']';
}

