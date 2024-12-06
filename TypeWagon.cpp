#include "TypeWagon.h"
TypeWagon::TypeWagon(const std::string& name, char symbol)
: name(name), symbol(symbol) {}
const std::string& TypeWagon::getName() const {
    return name;
}
char TypeWagon::getSymbol() const {
    return symbol;
}
const TypeWagon TypeWagon::PASSENGER("passager", 'O');
const TypeWagon TypeWagon::FREIGHT("marchandise", '#');
const TypeWagon TypeWagon::UTILITY("utilitaire", '@');
