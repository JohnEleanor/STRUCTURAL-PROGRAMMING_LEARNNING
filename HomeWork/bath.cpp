#include <iostream>
using namespace std;

int main()
{

    while (true)
    { // ลูปโดยใช้ true
        int num, price, num1; //กำหนดตัวแปร
    cout << "Enter money: ";
        cin >> num; // ใส่จำนวนเงิน
        cout << "Enter price: ";
        cin >> price;       // ใส่จำนวนสินค้่า
        num1 = num - price; // เงินสุทธิ
        if (num1 > price) //กรณีเงินไม่พอ
        {

            int numnth, numnfh, numoh, numft, numnt, tip;

            numnth = num1 / 1000; // หาร 1000 เพื่อให้ได้จำนวน
            num1 = num1 % 1000; // ม็อด 1000 เพื่อไม่ให้มีศูนย์มาแทรก

            numnfh = num1 / 500; // หาร 500 เพื่อให้ได้จำนวน
            num1 = num1 % 500; // ม็อด 1000 เพื่อไม่ให้มีศูนย์มาแทรก

            numoh = num1 / 100; // ม็อด 500 เพื่อไม่ให้มีศูนย์มาแทรก
            num1 = num1 % 100; // ม็อด 1000 เพื่อไม่ให้มีศูนย์มาแทรก

            numft = num1 / 50; // ม็อด 50 เพื่อไม่ให้มีศูนย์มาแทรก
            num1 = num1 % 50; // ม็อด 50 เพื่อไม่ให้มีศูนย์มาแทรก

            numnt = num1 / 10; // ม็อด 10 เพื่อไม่ให้มีศูนย์มาแทรก
            num1 = num1 % 10; // ม็อด 10 เพื่อไม่ให้มีศูนย์มาแทรก

            tip = num1; // เศษเหลือเป็นทิปเผื่ออาจารย์อยากออก

            cout << "1000 Baht bills: " << numnth << endl; //ผลลัพธ์ที่ได้ทั้งหมด
            cout << "500 Baht bills: " << numnfh << endl;
            cout << "100 Baht bills: " << numoh << endl;
            cout << "50 Baht bills: " << numft << endl;
            cout << "10 Baht coins: " << numnt << endl;
            cout << "Tip: " << tip << " Baht" << endl;
        }
        else 
        {
            cout << "Your Money is not on price we set"<< endl;

        }

    }
return 0;

}