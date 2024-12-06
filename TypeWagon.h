#ifndef TYPE_WAGON_H
#define TYPE_WAGON_H

#include <string>



class TypeWagon {
    private:
        std::string name;
        char symbol;

    public:
        TypeWagon(const std::string& name, char symbol);

        [[nodiscard]] const std::string& getName() const;
        [[nodiscard]] char getSymbol() const;

        static const TypeWagon PASSENGER;
        static const TypeWagon FREIGHT;
        static const TypeWagon UTILITY;
    };

#endif // TYPE_WAGON_H