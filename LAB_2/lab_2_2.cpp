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
int main() {
  
    double __raduis;
    double __total;

    cout << "Program Calculate Area Circle.\n";
    cout << "Enter Radius: ";
    cin >> __raduis;
    
    __total = 3.1415 * __raduis * __raduis;
    
    cout << "\nArea of circle with radius: " << __total;
    cout << "\nCircumference is: " << __raduis *  3.1415 * 2;
    

    cout << "\n";

    return 0;
}