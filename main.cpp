#include <iostream>
#include <fstream>
#include <string>

int main() {



    std::string username;
    std::string password;
    const int NumberOfUsers = 2;
    const int LengthOfUsernames = 10;
    const int LengthOfPasswords = 10;

   char un[NumberOfUsers][LengthOfUsernames] = {"csaragon", "zmixson" };
    char pw[NumberOfUsers][LengthOfPasswords] = {"1941", "2001" };

    std::cout << "Welcome to Project Alpha \n";
    std::cout << "Please log in\n";
    bool loggedIn = false;
while (!loggedIn) { //loop to check if user has sucessfully logged in and allows them to keep trying to log in
    std::cout << "Username: ";
    std::cin >> username;

    std::cout << "Password: ";
    std::cin >> password;

    if (password == pw[1], username == un[1]) {

        printf("correct\n");
        loggedIn = true;

    } else {
        printf("Wrong username or password\n");
        printf("Please try again\n");
    }
}

    return 0;
}


