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
          
          
thx code from https://youtu.be/FgVs8YJDR_A


*/ 
#include <iostream>
using namespace std;



int main() {

    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9 - i; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            if (j == 1 || j == 2 * i - 1 ) {
                cout << i;
            } else {
                cout << " ";
            }
            
        }
        cout << endl;   
    }

    return 0;
}