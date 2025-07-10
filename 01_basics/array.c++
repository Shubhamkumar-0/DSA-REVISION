#include <iostream>
using namespace std;

int main() {
    char name[100];
    cout << "Enter your name: ";
    cin.getline(name, 100);
    cout << "Hello, " << name << "! Welcome to C++ programming." << endl;
    return 0;
}
