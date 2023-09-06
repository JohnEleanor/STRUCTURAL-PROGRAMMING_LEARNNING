#include <iostream>
using namespace std;

int main() {
  int num1;

  int counter_100 = 0;
  int counter_50 = 0;
  int counter_10 = 0;

  cout << "Enter the first number: ";
  cin >> num1;

    int i;
    for ( i = 0; i < num1; i++)
    {
      

        if (num1 >= 100)
        {
            num1 = num1 - 100;
            counter_100++;

        }else if (num1 == 50 or num1 => 50)
        {
            num1 = num1 - 50;
            counter_50++;

        }else if(num1 == 10){

            num1 = num1 - 10;
            counter_10++;

        }

    }

  
  

  cout << counter_100 << endl;
  cout << counter_50 << endl;
  cout << counter_10 << endl;

  
  cout << "The total number is: " << num1 << endl;

  return 0;
}