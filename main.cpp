#include <iostream>
#include <fstream>
#include <string>
#include <stdbool.h>

int main() {

    std::string pw;
    std::string un;
    std::string username;
    std::string password;

    un = "csaragon";
    pw = "1941";

    std::cout << "Welcome to Project Alpha \n";
    std::cout << "Please log in\n";
    int loggedIn = false;
while (!loggedIn) {
    std::cout << "Username: ";
    std::cin >> username;

    std::cout << "Password: ";
    std::cin >> password;

    if (password == pw, username == un) {

        printf("correct\n");
        loggedIn = true;

    } else {
        printf("Wrong username or password\n");
        printf("Please try again\n");
    }
}






    return 0;
}


