#include "FreightWagon.h"


FreightWagon::FreightWagon(int freightCount)
        : AbstractWagon(new TypeWagon(TypeWagon::FREIGHT)), freightCount(freightCount) {}

void FreightWagon::setFreightCount(int count) {
        freightCount = count;
    }

int FreightWagon::getFreightCount() const {
        return freightCount;
    }

void FreightWagon::print(std::ostream& os) const {
        os << "[";
        for (int i = 0; i < freightCount; ++i)
            os << getSymbol();
        os << "]";
    }
