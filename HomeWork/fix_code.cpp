#include <iostream> 
using namespace std; 
int main() { 
    cout << "Welcome to my world!" << endl; 
    long pi = 3.14; 
    cout << "Please enter 2 of your favorite integers: "; 
    short fav1, fav2; 
    cin >> fav1, fav2; 

    short a33 = fav1 + fav2;
    float b33 = abs(float(fav1 - fav2)); 
    pi = 3.14159; 
    cout << "You will get married at age: " << a33 << endl; 
    cout << "You will have " << b33 << " children" << endl; 
    cout << "Good luck! Bye ^^" << endl; return 0; 
}