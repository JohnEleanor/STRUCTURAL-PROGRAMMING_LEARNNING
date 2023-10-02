// This Program create and used array 1 Dimension
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int X[10]; // declare and allocate array
    int Y[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    const int Array_Size = 10;
    int Z[Array_Size];
    // Initial value in array
    for (int i = 0; i < 10; i++)
        X[i] = 0;
    for (int i = 0; i < Array_Size; i++)
        Z[i] = 2 + 2 * i;
    // Display output of array
    cout << ": Subscript : Array X : Array Y : Array Z :\n";
    cout << setfill('=') << setw(43) << "=" << endl;
    cout << setfill(' ');
    for (int i = 0; i < Array_Size; i++)
    {
        cout << ": " << setw(6) << i << " : ";
        cout << setw(6) << X[i] << " : ";
        cout << setw(6) << Y[i] << " : ";
        cout << setw(6) << Z[i] << " :";
        cout << endl;
    }
    cout << setfill('=') << setw(43) << "=" << endl;
    return (0);
}