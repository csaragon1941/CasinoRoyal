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
    int x = NumberOfUsers;
    int i = 0;
while(x > 0) {
    if (password == pw[i], username == un[i]) {

        printf("correct\n");
        loggedIn = true;
        x = 0;

    } else {
        i++;
        x--;
    }

}
    if (!loggedIn) {
        printf("Wrong username or password\n");
        printf("Please try again\n");
    }
}

    return 0;
}


