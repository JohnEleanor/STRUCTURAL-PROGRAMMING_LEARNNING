#include <iostream>
using namespace std;
int main() {
  
/*
    ?find a Price of productv


    /$$$$$
   |__  $$
      | $$
      | $$
 /$$  | $$
| $$  | $$
|  $$$$$$/
 \______/ 
          
          
    🧠 Thx 


*/ 
    float __price;
    float __vat;
    float __total; 
    
    cout << "Enter price :";
    cin >> __price ;
    cout << "Enter vat (%) :";
    cin >> __vat;
    
    __total =(__vat / 100) * __price;

    cout << "\nNet Price of product = " << __total + __price;
    return 0;
}