#include <iostream>

using namespace std;

int main() {

    int __number[5];

    int i; 

    for ( i = 0; i < 5; i++)
    {
        cout << "PLASE ENTER YOUR FIVE NUMBER : ";
        cin >> __number[i];
    }

    int counter;
    cout  << "===========" << endl;
    for (counter = 0; counter < sizeof(__number) / sizeof(__number[0]); counter++)
    {

        int num_1;
        cout << __number[counter]<< " : ";
        for (num_1 = 0; num_1 < __number[counter]; num_1++)
        {
            cout  << '*';
        }
        cout << endl;
    }
    cout <<  "===========" ;

    

    return 0;
}