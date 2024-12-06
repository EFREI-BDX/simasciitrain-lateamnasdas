#ifndef WAGONS_H
#define WAGONS_H
#include <vector>
#include "AbstractWagon.h"

class Wagons {
    private:
        std::vector<AbstractWagon*> wagons;
    public:
        Wagons();
        ~Wagons();

        Wagons* addWagon(AbstractWagon* wagon);
        void print(std::ostream& os) const;

        friend std::ostream& operator<<(std::ostream& os, const Wagons& wagons) {
            wagons.print(os);
            return os;
        }
    };



#endif // WAGONS_H
