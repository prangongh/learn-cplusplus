#pragma once

#include <string>
#include "Car.h"

class User {
    private:
        std::string username;
        std::string password;
        Car rentedCar;
        bool loggedIn;
    public:
        User();
        User(std::string username, std::string password);
        bool isLoggedIn();
        void setRentedCar(Car pCar);
        Car getRentedCar();
        std::string getUsername();
        std::string getPassword();
        bool login();
        bool logout();

        static void registerUser();
};
