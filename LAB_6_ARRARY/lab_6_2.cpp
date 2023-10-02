// Compute the sum of the elements in a array
#include <iostream>
using namespace std;
int main()
{
    // declare and initial array
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    const int Array_Size = 10;
    int Sum = 0;
    // Compute sum value in array
    for (int i = 0; i < Array_Size; i++)
        Sum = Sum + A[i];
    // Display result
    cout << "Total of array elements : " << Sum << endl;
    return (0);
}