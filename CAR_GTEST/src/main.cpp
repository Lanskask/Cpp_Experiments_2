#include <iostream>
#include "Car.h"

int sum(int a, int b) {
    return a + b;
}

int weight_on_one_weel(Car car);

int main() {
    Car car(200, 4);
    std::cout << car << std::endl;

    char *str1 = "hello";
    std::cout << str1 << std::endl;

    wchar_t *str2 = L"hello2";
    std::cout << str2 << std::endl;


    return EXIT_SUCCESS;
}

int weight_on_one_weel(Car car) {
    return car.getWeight() / car.getNumOfWeels();
}
