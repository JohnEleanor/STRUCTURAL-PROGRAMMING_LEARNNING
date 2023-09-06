#include <iostream>
using namespace std;

int main() {
  int num1, num2, num3;
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;
  cout << "Enter the third number: ";
  cin >> num3;

  int minNum;

  if (num1 <= num2 && num1 <= num3) {
    minNum = num1;
  } else if (num2 <= num1 && num2 <= num3) {
    minNum = num2;
  } else {
    minNum = num3;
  }

  cout << "The minimum number is: " << minNum << endl;

  return 0;
}