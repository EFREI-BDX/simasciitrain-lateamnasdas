#ifndef ABSTRACT_WAGON_H
#define ABSTRACT_WAGON_H

#include <ostream>
#include "TypeWagon.h"



class AbstractWagon {
    protected:
        TypeWagon* typeWagon{};

    public:
        explicit AbstractWagon(TypeWagon *typeWagon);
        virtual ~AbstractWagon() = default;

        [[nodiscard]] char getSymbol() const;
        [[nodiscard]] std::string getType() const;

        virtual void print(std::ostream& os) const = 0;

        friend std::ostream& operator<<(std::ostream& os, const AbstractWagon& wagon) {
            wagon.print(os);
            return os;
        }
    };

#endif // ABSTRACT_WAGON_H