// Passing arrays and individual element to function
#include <iostream>
using namespace std;
void ModifyArray(int Temp[]);
void ModifyElement(int Temp);
int main()
{
    int Data[] = {1, 2, 3, 4, 5};
    cout << "Effects of passing entrie array pass-by-reference.\n";
    cout << "Original array's value : ";
    for (int i = 0; i < 5; i++)
        cout << Data[i] << " ";
    cout << endl;
    ModifyArray(Data); // array is passed pass-by-reference
    cout << "Modified array's value : ";
    for (int i = 0; i < 5; i++)
        cout << Data[i] << " ";
    cout << endl
         << endl;
    cout << "Effects of passing array element pass-by-value.\n";
    cout << "Data[3] before modify element : ";
    cout << Data[3] << endl;
    ModifyElement(Data[3]); // array element is passed pass-by-value
    cout << "Data[3] after modify element : ";
    cout << Data[3] << endl
         << endl;
    return (0);
}
void ModifyArray(int Temp[])
{
    for (int j = 0; j < 5; j++)
        Temp[j] *= 2;
}
void ModifyElement(int Temp)
{
    Temp *= 2;
}