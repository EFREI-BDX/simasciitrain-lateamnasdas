//
// Created by riyad on 06/12/2024.
//

#ifndef TYPELOCOMOTIVE_H
#define TYPELOCOMOTIVE_H

#include <string>

class TypeLocomotive {
public:
    static TypeLocomotive *ELECTRIC;
    static TypeLocomotive *GASOLINE;
    explicit TypeLocomotive(const std::string &name,const char symbol) : name(name), symbol(symbol){}
    [[nodiscard]] std::string getName() const {
        return name;
    }

    void setName(const std::string &name) {
        this->name = name;
    }

    [[nodiscard]] char getSymbol() const {
        return symbol;
    }

    void setSymbol(const char symbol) {
        this->symbol = symbol;
    }


private:
    std::string name;
    char symbol;


};



#endif //TYPELOCOMOTIVE_H
