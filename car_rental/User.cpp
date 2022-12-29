#include "User.h"
#include <iostream>
#include <fstream>

User::User() {
    this->username = "";
    this->password = "";
    this->rentedCar = Car();
    this->loggedIn = false;
}

User::User(std::string username, std::string password) {
    this->username = username;
    this->password = password;
    this->rentedCar = Car();
    this->loggedIn = false;
}

bool User::isLoggedIn() {
    return this->loggedIn;
}

void User::setRentedCar(Car pCar) {
    this->rentedCar = Car(pCar.getModel(), pCar.getYear(), pCar.getRate());
}

Car User::getRentedCar() {
    return this->rentedCar;
}

std::string User::getUsername() {
    return this->username;
}

std::string User::getPassword() {
    return this->password;
}

bool User::login() {
    std::string registeredUsername, registeredPassword;

    std::ifstream read("data/users/" + this->username + ".txt");
    std::getline(read, registeredUsername);
    std::getline(read, registeredPassword);

    if (registeredUsername == this->username && 
        registeredPassword == this->password)
    {   
        return true;
    }
    else
    {
        return false;
    }
}

bool User::logout() {
    this->loggedIn = false;
    return true;
}

void User::registerUser() {
    std::string username, password;

    std::cout << "Enter a username: ";
    std::cin >> username;

    std::cout << "Enter a password: ";
    std::cin >> password;

    std::ofstream file("data/users/" + username + ".txt");

    file << username << std::endl
        << password;
    file.close();
}
