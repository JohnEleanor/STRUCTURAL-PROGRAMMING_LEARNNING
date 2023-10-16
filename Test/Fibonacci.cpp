#include <iostream>
using namespace std;

int main()
{
    int inPut_numCheck;
    int _set_1 = 0;
    int _set_2 = 1;
    int _Check = _set_1 + _set_2;
    int i = 0;

    cout << "Plase Enter Your FIBONACCI NUMBER You Want To Check : ";
    cin >> inPut_numCheck;

    for (i; _Check < inPut_numCheck; i++)
    {
        _set_1 = _set_2;
        _set_2 = _Check;
        _Check = _set_1 + _set_2;

        if (_Check > inPut_numCheck)
        {
            cout << "[!] Your Input Number Is Not Fibonacci : " << inPut_numCheck << endl;
        }
        else\
        {
            cout << "[" << i << "] : " << _Check << endl;
        }
    }

    return 0;
}