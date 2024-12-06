#ifndef FREIGHT_WAGON_H
#define FREIGHT_WAGON_H

#include "AbstractWagon.h"

class FreightWagon : public AbstractWagon {
    private:
        int freightCount;
    public:
        explicit FreightWagon(int freightCount);
        void setFreightCount(int count);
        [[nodiscard]] int getFreightCount() const;
        void print(std::ostream& os) const override;
};



#endif // FREIGHT_WAGON_H