/*
 * จงเขียนโปรแกรมคำนวณเงินเดือนของพนักงาน โดยมีข้อกำหนดดังนี้
 * ให้มีการรับเงินเดือนพนักงานผ่านทางคีย์บอร์ดและทำการถามผู้ใช้ว่าพนักงานคนนี้เข้างานสายหรือไม่ ถ้าไม่
 * เพิ่มเงินเดือนอีก 1,000 บาท และถามผู้ใช้อีกว่าพนักงานคนนี้มี OT หรือไม่ ถ้ามีทำการรับค่าชั่วโมง OT
 * โดย OT ของบริษัทนี้ได้ชั่วโมงละ 200 บาท
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int salary = 0, OT_HOUR = 0;
    string __late__ = "";
    string __OT__ = "";

    cout << "[+] What salary do you have : ";
    cin >> salary;

    do
    {
        cout << "[+] You late ? : (Y/n) ";
        cin >> __late__;
    } while(!(__late__ == "Y" or __late__ == "y" or __late__ == "n" or __late__ == "N"));
    
    if (__late__ == "n" or "N")
    {

        salary = salary + 1000;
        cout <<  "[DEBUG]: You have no late +1000 : " << salary << endl;
    };

    do
    {
        cout << "[+] You Do Have OverTime ? : (Y/n) ";
        cin >> __OT__;
    } while(!(__OT__ == "Y" or __OT__ == "y" or __OT__ == "n" or __OT__ == "N"));
   

    

    if (__OT__ == "Y" or __OT__ ==  "y")
    {
        cout << "[+] PLASE ENTER YOUR HOURS : ";
        cin >> OT_HOUR;
        int total_OT_HOUR = OT_HOUR * 200;
        salary = salary + total_OT_HOUR;
    };

    cout << "THIS IS TOTAL YOUR SALARY : ";
    cout << salary;

    return 0;
}