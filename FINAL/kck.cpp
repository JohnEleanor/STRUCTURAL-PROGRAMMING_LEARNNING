#include <iostream>

// ฟังก์ชันหาผลรวมแบบ pass by value
int sumByValue(int arr[5]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    return sum;
}

// ฟังก์ชันหาค่าเฉลี่ยแบบ pass by reference
double averageByReference(int arr[5]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    return sum / 5;
}

using namespace std; // ใช้ using namespace std เพื่อไม่ต้องใช้ std:: ทุกครั้ง

int main() {
    int arr[5];
    


    // รับข้อมูลจากผู้ใช้
    cout << "ป้อนตัวเลข 5 ตัว: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // เรียกใช้ฟังก์ชันและแสดงผล
    int sum = sumByValue(arr);
    double avg = averageByReference(arr);

    cout << "ผลรวม: " << sum << endl;
    cout << "ค่าเฉลี่ย: " << avg << endl;

    return 0;
}