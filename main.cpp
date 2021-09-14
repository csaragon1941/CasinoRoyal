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

    std::cout << "Username: ";
    std::cin >> username;

    std::cout << "Password: ";
    std::cin >> password;

    if (password == pw, username == un) {

        printf("correct");


    } else {
        printf("wrong");

    }

    return 0;
}


