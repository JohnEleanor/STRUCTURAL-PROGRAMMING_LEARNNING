#include <iostream>
using namespace std;

int main()
{
  int num1 = 0;

  int counter_1000 = 0;
  int counter_500 = 0;
  int counter_100 = 0;

  cout << "Enter the first number: ";
  cin >> num1;
cout << "THIS IS INPUT : " << num1 << endl;
  int i = 0;
  for ( i = 0; i < num1; i++)
  {

    if (num1 >= 1000)
    {

      num1 = num1 - 1000;
      counter_1000++;
      // cout << num1 << " - 1000 = " << num1<< endl;
    }
    else if (num1 >= 500)
    {
      num1 = num1 - 500;
      counter_500++;
      // cout << num1 << " - 500 = " << num1<< endl;
    }
    else if (num1 >= 100)
    {
      num1 = num1 - 100;
      counter_100++;
      // cout << num1 << " - 100 = " << num1<< endl;
    }
    else{
      cout << "THIS IS ELSE " << endl;
    }

  }
    


  cout << counter_100 << endl;
  cout << counter_500 << endl;
  cout << counter_100 << endl;

  cout << "The total number is: " << num1 << endl;

  return 0;
}