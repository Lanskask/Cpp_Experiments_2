//
// Created by Sergey Murtazin on 10/12/2019.
//

#ifndef UNTITLED_CAR_H
#define UNTITLED_CAR_H


#include <ostream>

class Car {
private:
    int weight;
    int num_of_weels;
public:
    bool operator<(const Car &rhs) const;

    bool operator>(const Car &rhs) const;

    bool operator<=(const Car &rhs) const;

    bool operator>=(const Car &rhs) const;

public:
    friend std::ostream &operator<<(std::ostream &os, const Car &car);

public:
    int getWeight() const;

    void setWeight(int weight);

    int getNumOfWeels() const;

    void setNumOfWeels(int numOfWeels);

    static int double_it(int arg1);

public:
    virtual ~Car();

public:
    Car(int weight, int numOfWeels);
};

#endif //UNTITLED_CAR_H
