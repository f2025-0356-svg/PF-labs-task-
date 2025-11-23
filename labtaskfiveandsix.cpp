#include <iostream>
using namespace std;

int main() {
    string password;

    while (true) {
        cout << "Enter password: ";
        cin >> password;

        if (password == "Python123") {
            cout << "passsword is true and accessable to user" << endl;
            break; 
        } else {
            cout << "Incorrect password Try again"<<endl;
        }
    }

    return 0;
}