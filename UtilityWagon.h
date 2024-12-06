#ifndef UTILITY_WAGON_H
#define UTILITY_WAGON_H

#include "AbstractWagon.h"

class UtilityWagon : public AbstractWagon {
    public:
        UtilityWagon();
        void print(std::ostream& os) const override;
    };


#endif