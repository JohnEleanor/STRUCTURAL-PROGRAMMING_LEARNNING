#include<iostream>
using namespace std;

/*
 ! arrary[row][column]
*/ 
const int numberOfTest = 3; // Settting Your Test 



int calgrade(int a[][numberOfTest]) {
    int grade;

    
    for (int i = 0; i < numberOfTest; i++)
    {
        for (int j = 0; j < numberOfTest; j++)
        {
            cout << "element at index "<< i << ":" << j << " is " << a[i][j] << endl;


           
        }
    }
    
    return grade;
}



int main() {

   int myStudent[2][numberOfTest];
   int number_student;

    // input ค่า " นักเรียน "
    cout << "Numbers of students : ";
    cin >> number_student;


    for (int i = 0; i < number_student; i++) // Loop for จำนวนนักเรียน
    {
        for (int j = 0; j < numberOfTest; j++) // Loop for จำนวนข้อสอบ
        {
            cout << "Please input score of Stundent " << i+1 << " of : Test " << j+1 << " : ";
            cin >> myStudent[i][j];
        }
    }

    // ทำเมื่อ Input ค่าสำเร็จเเล้ว
   calgrade(myStudent);

   return 0;
}