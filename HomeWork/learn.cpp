#include <iostream>

using namespace std;

int main()
{

    int _number[5];
    //! เปลี่ยนจากการรับเเบบนี้
    // cin >> _number[0] >> _number[1] >> _number[2] >> _number[3] >> _number[4];
    int counter = 5;
    //! เป็นเเบบนี้
    int i;

    for (i = 0; i < counter; i++)
    {
        cout << "ENTER FIVE NUMBER : ";
        cin >> _number[i];
    }
    int x;
    for (x = 0; x < counter; x++)
    {
        cout << "==========";
        cout << _number[x] << " : ";

        for (int t = 0; t < _number[x]; t++)
        {
            cout << "*";
        }

        cout << "==========";
        cout << "\n";
    }

    return 0;
}