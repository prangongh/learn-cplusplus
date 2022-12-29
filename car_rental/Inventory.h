#pragma once

#include <string>
#include <vector>

#include "User.h"
#include "Car.h"

class Inventory {
    private:
        std::vector<Car> availableInventory;
    public:
        Inventory();
        std::vector<Car> getInventory();
        void displayInventory();
        bool rentCar(Car pCar, User pUser);
        bool returnCar(User pUser);
};
