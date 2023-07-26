/*
    ?🧠 Std_name: Chotiros 
    ?🧠 Std_id: C6606021420148


    /$$$$$
   |__  $$
      | $$
      | $$
 /$$  | $$
| $$  | $$
|  $$$$$$/
 \______/ 
          
          



*/ 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    int base = 2;

    cout << "INPUT: ";
    cin >> number;

    int digit1 = number / 1000; 
    int digit2 = (number / 100) % 10; 
    int digit3 = (number / 10) % 10; 
    int digit4 = number % 10; 

    int a = digit1 * base *digit1 * base *digit1 * base;
    int b = digit2 * base *digit2 * base;
    int c = digit3 * base;
    int d = digit4 * base *  0;

    cout << "RESULT: " << a+b+c+d;



}