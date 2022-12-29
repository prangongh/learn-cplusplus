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

bool operator==(const Car &c1, const Car &c2)
{
    if ((c1.model == c2.model) &&
        (c1.year == c2.year) &&
        (c1.rate == c2.rate))
    {
        return true;
    }

    return false;
}

std::ostream &operator<<(std::ostream &os, const Car &c3)
{
    os << "Model: " << c3.model << std::endl
       << "Year: " << c3.year << std::endl
       << "Hourly Rental Rate: " << c3.rate << std::endl;
}
