/*


  *  ให้นักศึกษาเขียนโปรแกรมเพื่อแปลงข้อมูลลวันที่จากตัวเลขให้เป็นข้อความ โดยเขียนเป็นฟังก์ชั่นในการท างาน
  *  แบบส่งค่ากลับคืนที่ชื่อฟังก์ชั่น
  *  ตัวอย่าง Input Date(dd/mm/yyyy) : 15/09/2000
  *  Format 1: September 15, 2000
  *  Format 2: 15 Sep 2000

  ? [🧠] Student Name: Chotiros Suwansoot
  ? [🧠] Studnet ID: 6606021420148

  !อาจจะออกสอบ Final Naja
*/ 


#include <iostream>
#include <string>

using namespace std;

int convertStringtoInt(string something){
    // int n = stoi(something);
    return (stoi(something));

}


int main(int argc, char const *argv[])

{

    string input_date;
    int day, month, year;

    cout << "Plase Input Date (dd/mm/yyyy)  : ";
    cin >> input_date;

 

    day =  convertStringtoInt(input_date.substr(0,2));
    month = convertStringtoInt(input_date.substr(3,2));
    year =  convertStringtoInt(input_date.substr(6,4));


    // cout << "-----------\n";

    string month12[12]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    for (int i = 0; i < 12; i++)

    {

        // cout << month12[month-1] << endl;

        cout << "Format: 1 (Month/day/Yeay) : " << month12[month-1] << " " << day << " " << year << endl;

        cout << "Format: 2 (Day/Month/Yeay) : " << day << " " << month12[month-1] << " " << year << endl ;

        break;

 

    }   

   

    return 0;

}

 