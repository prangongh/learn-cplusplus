#include <string>

#include "Car.h"

Car::Car() {}

Car::Car(std::string pModel, int pYear, int pRate)
{
    this->model = pModel;
    this->year = pYear;
    this->rate = pRate;
}
std::string Car::getModel()
{
    return this->model;
}
int Car::getYear()
{
    return this->year;
}
int Car::getRate()
{
    return this->rate;
}
