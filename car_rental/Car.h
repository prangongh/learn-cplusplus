#pragma once

#include <string>
#include <iostream>
class Car {
    private:
        std::string model;
        int year;
        int rate;
    public:
        Car();
        Car(std::string pModel, int pYear, int pRate);
        std::string getModel();
        int getYear();
        int getRate();
        friend bool operator==(const Car &c1, const Car &c2);
        friend std::ostream &operator<<(std::ostream &os, const Car &c3);
};
