//
// Created by riyad on 06/12/2024.
//

#ifndef ITRAIN_H
#define ITRAIN_H
#include <ostream>


class ITrain {
public:
    virtual ~ITrain() = default;
    friend std::ostream& operator<<(std::ostream& os, const ITrain& train) {
        train.print(os);
        return os;
    }
protected:
    virtual void print(std::ostream& os) const = 0;
};



#endif //ITRAIN_H
