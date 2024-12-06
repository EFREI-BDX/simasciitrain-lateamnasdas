//
// Created by riyad on 06/12/2024.
//

#ifndef ABSTRACTLOCOMOTIVE_H
#define ABSTRACTLOCOMOTIVE_H
#include "TrainElement.h"
#include "TypeLocomotive.h"


class AbstractLocomotive : public TrainElement {
private:
    TypeLocomotive *typeLocomotive;
    void print(std::ostream& os) const override;
public:
    explicit AbstractLocomotive(TypeLocomotive *typelocomotive);
    ~AbstractLocomotive() override;

    [[nodiscard]] std::string getType() const override {
        return typeLocomotive->getName();
    }

    void setTypeLocomotive(TypeLocomotive * const typeLocomotive) {
        this->typeLocomotive = typeLocomotive;
    }
    char getSymbol() const override {
        return typeLocomotive->getSymbol();
    };








};



#endif //ABSTRACTLOCOMOTIVE_H
