#include <iostream>
#include <string>

// custom header files
#include "User.h"
#include "Inventory.h"
#include "RentalService.h"

static User loggedInUser = User();

void loggedin_menu() {
    
}

void main_menu() {
    std::cout << "Select an option" << std::endl
              << "1: Register" << std::endl
              << "2: Login" << std::endl;
    int selection;
    std::cin >> selection;

    bool loggedIn = false;

    // register a user
    if (selection == 1)
    {
        User::registerUser();
        main_menu();
    }
    // login a user
    else if (selection == 2) // this should prompt the user to log in as well
    {   
        std::string username, password;
        std::cout << "Login" << std::endl << "Enter the username: ";
        std::cin >> username;

        std::cout << "Enter the password: ";
        std::cin >> password;

        loggedInUser = User(username, password);

        if (loggedInUser.login())
        {
            std::cout << "Login Credentials Invalid." << std::endl;
            loggedInUser = User();
            main_menu();
        }
        else
        {
            std::cout << "Successfully Logged In" << std::endl;
            loggedin_menu();
        }
    }
}

int main() {
    std::cout << "Welcome to Adama & Prangon Car Rental. Price gouging you since 1999!" << std::endl;
    main_menu();
}

// login
// car inventory
// rental
// return service