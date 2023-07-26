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
using namespace std;


//  LAB-3
int main() {
    int number;
    
    cout << number;

    cout << "INPUT: ";
    cin >> number;


    int digit1 = number / 1000; // หลักพัน
    int digit2 = (number / 100) % 10; // หลักร้อย
    int digit3 = (number / 10) % 10; // หลักสิบ
    int digit4 = number % 10; // หลักหน่วย

    cout << "RES: " << digit1 << " " << digit2 << " " << digit3 << " " << digit4 << endl;
}