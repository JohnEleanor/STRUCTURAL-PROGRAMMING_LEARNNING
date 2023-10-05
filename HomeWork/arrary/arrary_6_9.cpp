/*
    ?🧠 Student Name: Chotiros 
    ?🧠 Student ID: C6606021420148

*/ 


#include <iostream>
#include <iomanip>
using namespace std;

// TODO: Headder
void Sort(int temp[], const int max);
void Swap(int &n1, int &n2);

int main()
{

    const int Max = 10;
    int Data[Max] = {50, 0, 44, 7, 3, 100, 12, 36, 72, 23};

    cout << "\nData before sort in array ...\n";

    for (int n = 0; n < Max; n++) cout << setw(5) << Data[n];
    cout << "\n\nStart Sort ...\n";

    Sort(Data, Max);

    cout << "\n\nEnd Sort ...\n";
    cout << "\nData after sort finish.\n";

    for (int n = 0; n < Max; n++) cout << setw(5) << Data[n];
    cout << "\n";

    return (0);
}


void Sort(int temp[], const int Max)
{
    int i, j, n;
    for (i = 0; i < Max - 1; i++)
    {
        n = i;

        cout << endl << "======== [" << i << "] ===========" << endl;
        // cout << "Address of temp[i] : " << &temp[i] << endl;
        // cout << "Address of temp[n] : " << &temp[n] << endl;

        for (j = i; j < Max; j++)

            if (temp[n] > temp[j]) n = j;


        if (n != i) Swap(temp[i], temp[n]);

        cout << "\n" << i + 1 << " : ";
        for (j = 0; j < Max; j++) cout << setw(5) << temp[j];

    }
}

void Swap(int &n1, int &n2)
{
    // cout << "======== Swap() ========" << endl;
    // cout << "======== Before ========" << endl;
    // cout << "Address Of &n1 : " << &n1 << endl;
    // cout << "Data Of n1 : " << n1 << endl;
    // cout << "Address Of &n2 : " << &n2 << endl;
    // cout << "Data Of n2 : " << n2 ;

    int temp = 10;
    temp = n1;
    n1 = n2;
    n2 = temp;

    // cout << endl << "======== Affter ========" << endl;
    // cout << "Address Of &n1 : " << &n1 << endl;
    // cout << "Data Of n1 : " << n1 << endl;
    // cout << "Address Of &n2 : " << &n2 << endl;
    // cout << "Data Of n2 : " << n2 << endl;

    cout << "========================" << endl;


}
