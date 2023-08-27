#include <iostream>
using namespace std;

int main() {
    int __num = 0;
    int __passed = true;

    do 
    {
    system("cls");
    cout << "PLZ ENTER YOUR NUMBER : ";
    cin >> __num;

    if (__num >= 2 and __num <= 100)
    {
        __passed = false;

        int counter;

        for (counter = 0; counter < 4; counter++)

        {
            cout << "======= " << __num << " =======" << endl;

            for (int i = 1 ; i <= 12; i++)
            {
                cout << __num << " x " << i << " = " << ( __num*i ) << endl;
            }

            __num = __num + 2 ;


        }


    }

    }while (__passed);
    
    return 0;
}