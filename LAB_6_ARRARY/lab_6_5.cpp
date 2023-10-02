#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void ReadData(float Temp[]);
void CalculateData(const float Temp[], float &Mean, float &St_Dev);
const int MAX_ITEM = 5; /* maximum number of items in list of data */
int main()
{
    float X[MAX_ITEM], Mean, St_Dev;
    int i;
    /* gets the data in array */
    ReadData(X);
    /* Computes the mean and standard deviation */
    CalculateData(X, Mean, St_Dev);
    /* Displays the mean and standard deviation */
    cout << "The mean is ";
    cout << setw(7) << fixed << setprecision(2) << Mean << endl;
    cout << "The standrad deviation is " << setw(7) << St_Dev << endl;
    /* Displays the difference between each item and the mean */
    cout << "Table of difference between data values and mean\n";
    cout << "Index Item Difference\n";
    cout << "-------------------------------------\n";
    for (i = 0; i < MAX_ITEM; i++)
    {
        cout << setw(3) << i << " ";
        cout << setw(10) << X[i] << " ";
        cout << setw(10) << X[i] - Mean << endl;
    }
    return (0);
}
void ReadData(float Temp[])
{
    cout << "Enter " << MAX_ITEM;
    cout << " numbers separated by blanks or <enter> :\n> ";
    for (int i = 0; i < MAX_ITEM; i++)
        cin >> Temp[i];
    cout << endl;
}
void CalculateData(const float Temp[], float &Mean, float &St_Dev)
{
    float Sum, Sum_Sqr;
    Sum = Sum_Sqr = 0;
    /* Computes the sum of all data */
    for (int i = 0; i < MAX_ITEM; i++)
        Sum += Temp[i];
    /* computes the mean and standard deviation */
    Mean = Sum / MAX_ITEM;
    for (int i = 0; i < MAX_ITEM; i++)
        Sum_Sqr += pow(Temp[i] - Mean, 2);
    St_Dev = sqrt(Sum_Sqr / (MAX_ITEM - 1));
}
