#ifndef PASSENGER_WAGON_H
#define PASSENGER_WAGON_H

#include "AbstractWagon.h"

class PassengerWagon : public AbstractWagon {
    private:
        int passengerCount;
    public:
        explicit PassengerWagon(int passengerCount);
        void setPassengerCount(int count);
        [[nodiscard]] int getPassengerCount() const;
        void print(std::ostream& os) const override;
};


#endif // PASSENGER_WAGON_H