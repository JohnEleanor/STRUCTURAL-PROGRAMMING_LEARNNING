#include <iostream>
using namespace std;

int main()
{
    int inPut_numCheck;
    int _set_1 = 0;
    int _set_2 = 1;
    int _Check = 0;
    int i = 0;

    cout << "Plase Enter Your Fibonacci Number You Want To Check : ";
    cin >> inPut_numCheck;


    for ( i; _Check < inPut_numCheck; i++ )
    {
        

        if (i <= 1)
            _Check = i;
        else {
            _Check = _set_1 + _set_2;
            _set_1 = _set_2;
            _set_2 = _Check;
        }

        if (_Check <= inPut_numCheck) {
            cout << "[" << i << "] : " << _Check << endl;
        } else {
            cout << "[!] Your input is not fibonacci : "<< inPut_numCheck  << endl;
        }


      
    }

    return 0;
}