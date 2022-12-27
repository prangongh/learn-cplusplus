#include <iostream>
#include <fstream>
#include <string>

bool isLoggedIn(void)
{
    std::string username, password, un, pw;

    std::cout << "Enter username: ";
    std::cin >> username;

    std::cout << "Enter password: ";
    std::cin >> password;

    std::ifstream read("data\\" + username + ".txt");
    std::getline(read, un);
    std::getline(read, pw);

    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    std::cout << "Select an option" << std::endl
              << "1: Register" << std::endl
              << "2: Login" << std::endl;
    int selection;
    std::cin >> selection;

    // register a user
    if (selection == 1)
    {
        std::string username, password;

        std::cout << "Enter a username: ";
        std::cin >> username;

        std::cout << "Enter a password: ";
        std::cin >> password;

        std::ofstream file("data\\" + username + ".txt");

        file << username << std::endl
             << password;
        file.close();

        main();
    }
    // login a user
    else if (selection == 2) // this should prompt the user to log in as well
    {
        bool status = isLoggedIn(); // this requests the login

        if (!status)
        {
            std::cout << "Login Credentials Invalid." << std::endl;
            std::system("PAUSE");
            return 0;
        }
        else
        {
            std::cout << "Successfully Logged In" << std::endl;
            return 1;
        }
    }
}
