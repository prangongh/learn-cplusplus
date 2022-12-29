#include <iostream>
#include <algorithm>

#include "Inventory.h"

Inventory::Inventory()
{
}

std::vector<Car> Inventory::getInventory()
{
    return this->availableInventory;
}

void Inventory::displayInventory()
{
    for (auto &&c : availableInventory)
    {
        std::cout << c << std::endl;
    }
}

bool Inventory::rentCar(Car pCar, User pUser)
{
    if (std::find(this->availableInventory.begin(), this->availableInventory.end(), pCar) != this->availableInventory.end())
    {
        pUser.setRentedCar(pCar);
        this->availableInventory.erase(std::remove(this->availableInventory.begin(), this->availableInventory.end(), pCar), this->availableInventory.end());
    }
}

bool Inventory::returnCar(User pUser)
{
    this->availableInventory.push_back(pUser.getRentedCar());
    pUser.setRentedCar(Car());
}
