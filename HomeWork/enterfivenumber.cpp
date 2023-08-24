#include <iostream>

using namespace std;

int main()
{

    int n[5];

    int i;

    for (i = 0; i < 5; i++)
    {
        cout << "PLASE ENTER YOUR FIVE NUMBER : ";
        cin >> n[i];
    }

    int J;
    cout << "===========" << endl;
    for (J = 0; J < sizeof(n) / sizeof(n[0]); J++)
    {

        int x;
        cout << n[J] << " : ";
        for (x = 0; x < n[J]; x++)
        {
            cout << '*';
        }
        cout << endl;
    }
    cout << "===========";

    return 0;
}