#pragma once

#include <string>

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
};