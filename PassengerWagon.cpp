#include "PassengerWagon.h"



PassengerWagon::PassengerWagon(int passengerCount)
        : AbstractWagon(new TypeWagon(TypeWagon::PASSENGER)), passengerCount(passengerCount) {}

    void PassengerWagon::setPassengerCount(int count) {
        passengerCount = count;
    }

    int PassengerWagon::getPassengerCount() const {
        return passengerCount;
    }

void PassengerWagon::print(std::ostream& os) const {
    os << "[";
    for (int i = 0; i < passengerCount; ++i)
        os << getSymbol();
    os << "]";
}
