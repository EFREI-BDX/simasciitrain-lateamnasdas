//
// Created by riyad on 06/12/2024.
//

#ifndef TRAINELEMENT_H
#define TRAINELEMENT_H

#include "ostream"

class TrainElement {
public:
    virtual ~TrainElement()=default;
    friend std::ostream& operator<<(std::ostream& os, const TrainElement& train) {
        train.print(os);
        return os;
    }

    [[nodiscard]] virtual std::string getType() const = 0;

    [[nodiscard]] virtual char getSymbol() const = 0;

    friend std::ostream& operator<<(std::ostream& os, TrainElement &trainElement){
        trainElement.print(os);
        return os;
    }

protected:
    virtual void print(std::ostream& os) const = 0;


};



#endif //TRAINELEMENT_H
