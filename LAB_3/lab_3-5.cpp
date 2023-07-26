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

    int a = digit1 * 2 *digit1 * 2 *digit1 * 2;
    int b = digit2 * 2 *digit2 * 2;
    int c = digit3 * 2;
    int d = digit4 * 2 *  0;

    cout << "RESULT: " << a+b+c+d;



}