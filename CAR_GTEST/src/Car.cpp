//
// Created by Sergey Murtazin on 10/12/2019.
//

#include "Car.h"

int Car::double_it(int arg1) {
    return arg1 * 2;
}

//int Car::weight_on_one_weel(Car car) {
//    return car.getWeight() / car.getNumOfWeels();
//}

Car::Car(int weight, int numOfWeels) : weight(weight), num_of_weels(numOfWeels) {}

Car::~Car() {

}

int Car::getWeight() const {
    return weight;
}

void Car::setWeight(int weight) {
    Car::weight = weight;
}

int Car::getNumOfWeels() const {
    return num_of_weels;
}

void Car::setNumOfWeels(int numOfWeels) {
    num_of_weels = numOfWeels;
}

std::ostream &operator<<(std::ostream &os, const Car &car) {
    os << "weight: " << car.weight << " num_of_weels: " << car.num_of_weels;
    return os;
}

bool Car::operator<(const Car &rhs) const {
    if (weight < rhs.weight)
        return true;
    if (rhs.weight < weight)
        return false;
    return num_of_weels < rhs.num_of_weels;
}

bool Car::operator>(const Car &rhs) const {
    return rhs < *this;
}

bool Car::operator<=(const Car &rhs) const {
    return !(rhs < *this);
}

bool Car::operator>=(const Car &rhs) const {
    return !(*this < rhs);
}
