#pragma once

#include <string>
#include <vector>

#include "User.h"
#include "Inventory.h"

class RentalService {
    public:
        bool rentCar(User pUser);
        bool returnCar(User pUser);
};