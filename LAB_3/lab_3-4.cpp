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
    int _num;
    
    cout << _num;

    cout << "INPUT: ";
    cin >> _num;


    int _1 = _num / 1000; 
    int _2 = (_num / 100) % 10; 
    int _3 = (_num / 10) % 10; 
    int _4 = _num % 10; 

    cout << "RES: " << _1 << " " << _2 << " " << _3 << " " << _4 << endl;
}