#include <iostream>
using namespace std;

int main()
{
    int num1;
    int counter_1000 = 0;
    int counter_500 = 0;
    int counter_100 = 0;
    cout << "Enter the first number: ";
    cin >> num1;


    for (int i = 1; i < num1; i++)

    {
        cout << num1 << endl;

        if (num1 >= 1000)
        {
            num1 = num1 - 1000;
            counter_1000++;
        }

        if (num1 >= 500)
        {
            num1 = num1 - 500;
            counter_500++;
        }

        if (num1 >= 100)
        {
            num1 = num1 - 100;
            counter_100++;
        }
    }

    cout << "The total number is: " << num1 << endl;
    cout << "Bank 1000 : " << counter_1000 << endl;
    cout << "Bank 500 : " << counter_500 << endl;
    cout << "Bank 100 : " << counter_100 << endl;

    return 0;
}