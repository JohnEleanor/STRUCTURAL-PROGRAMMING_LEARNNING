#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <conio.h>

using namespace std;

void clear();
void intro();
int adminLogin();

class Hotel
{
private:
    string hotelName;              //ชื่อโรงแรม
    string roomNo;                 //เลขห้อง
    string name;                   //ชื่อผู้จอง
    string phone;                  //เบอร์ติดต่อผู้จอง
    int nights;                    //จำนวนวันที่ต้องการจอง
    float fare = 0.00;             //ราคาจ่ายจริง
    float price = 0.00;            //ราคาต่อห้องต่อคืน
    string fileName = "hotel.dat"; //ชื่อไฟล์

public:
    Hotel(string hotelName, float price)
    {
        this->price = price; // Constructor with parameters
        this->fileName = hotelName + ".dat";
    }

public:
    void mainMenu();
    void add();
    void edit();
    void modify(string r);
    void display();
    int checkRoom(string r);
    void deleteRecord(string r);
};

int main()
{

    Hotel hotel("myHotel", 700);
    intro();
    adminLogin();

    hotel.mainMenu();
    return 0;
}

void intro()
{
    cout << endl;
    cout << setfill('*') << setw(55) << "*" << endl;
    cout << endl;
    cout << "     C++ Project On Hotel Management System" << endl;
    cout << "🔥Devopleped By: Saksithon Matcharet and Somchai Borioon🔥" << endl;
    cout << endl;
    cout << setfill('*') << setw(55) << "*" << endl;
}

int adminLogin()
{
    string username, password;
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;
    if (username == "admin" && password == "admin")
    {
        cout << "Login Successful" << endl;
        return 0;
    }
    else
    {
        cout << "Login Failed";
        getch();
        clear();
        return main();
    }
}

void Hotel::mainMenu()
{
    clear();
    int choice;
    cout << "*************\n";
    cout << "* MAIN MENU *\n";
    cout << "*************\n";
    cout << "1. Add" << endl;
    cout << "2. Edit" << endl;
    cout << "3. Check" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        edit();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
        break;
    default:
        cout << "Invalid Choice" << endl;
    }
}

void Hotel::add()
{
    clear();
    ofstream fileOut(fileName.c_str(), ios_base::app);
    cout << "****************\n";
    cout << "* Booking Form *\n";
    cout << "****************\n";
    char key;
    cout << "Enter Room No: ";
    cin >> roomNo;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Phone: ";
    cin >> phone;
    cout << "Enter nights: ";
    cin >> nights;
    fare = nights * price;

    if (checkRoom(roomNo) == 1)
    {
        cout << "Room is already booked" << endl;
        getch();
        mainMenu();
    }
    else
    {
        fileOut << roomNo << " " << name << " " << phone << " " << nights << " " << fare << endl;
        cout << "💾 Room is booked successfully" << endl;
        cout << "Press any key to continue...";
        getch();
        fileOut.close();
        mainMenu();
    }
}

void Hotel::display()
{
    clear();
    ifstream fileIn(fileName.c_str(), ios::in);
    if (!fileIn.is_open())
    {
        cout << "File could not opened. " << fileName.c_str() << endl;
        return;
    }
    cout << setfill('*') << setw(55) << "*" << endl;
    while (fileIn >> roomNo >> name >> phone >> nights >> fare)
    {

        cout << "Room No: " << roomNo << endl;
        cout << "Name: " << name << endl;
        cout << "Phone: " << phone << endl;
        cout << "Price/day: " << price << endl;
        cout << "nights: " << nights << endl;
        cout << "Fare: " << fare << endl;
        cout << endl;
        cout << setfill('*') << setw(55) << "*" << endl;
    }

    fileIn.close();
    cout << "Press any key to main menu...";
    getch();
    mainMenu();
}

void Hotel::edit()
{
    clear();
    int choice;
    cout << "*************\n";
    cout << "* EDIT MENU *\n";
    cout << "*************\n";
    cout << "1. Modify Customer Record" << endl;
    cout << "2. Delete Customer Record" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    clear();
    cout << "Enter Room No: ";
    cin >> roomNo;
    switch (choice)
    {
    case 1:
        modify(roomNo);
        break;

    case 2:
        deleteRecord(roomNo);
        break;

    default:
        break;
    }
}

void Hotel::modify(string r)
{
    clear();
    long pos, flag = 0;
    string room, name, phone, nights, fare;
    fstream fileInOut(fileName.c_str(), ios::in | ios::out);
    if (!fileInOut.is_open())
    {
        cout << "File could not opened. " << fileName.c_str() << endl;
        return;
    }
    while (fileInOut >> room >> name >> phone >> nights >> fare)
    {
        pos = fileInOut.tellg();
        if (room == r)
        {
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Phone: ";
            cin >> phone;
            cout << "Enter Nights: ";
            cin >> nights;
            cout << "Enter Fare: ";
            cin >> fare;
            fileInOut.seekg(pos);
            fileInOut << room << " " << name << " " << phone << " " << nights << " " << fare << endl;
            cout << "Record is modified successfully" << endl;
            cout << "Press any key to main menu...";
            flag = 1;
            getch();
            mainMenu();
        }
    }
    if (flag == 0)
    {
        cout << "Room No. not found" << endl;
        cout << "Press any key to main menu...";
        getch();
        mainMenu();
    }
    fileInOut.close();
}

void Hotel::deleteRecord(string r)
{
    clear();
    string room, name, phone, nights, fare;
    ifstream fileIn(fileName.c_str(), ios::in);
    ofstream fileOut("temp.dat", ios::out);
    if (!fileIn.is_open())
    {
        cout << "File could not opened. " << fileName.c_str() << endl;
        return;
    }
    while (fileIn >> room >> name >> phone >> nights >> fare)
    {
        if (room != r)
        {
            fileOut << room << " " << name << " " << phone << " " << nights << " " << fare << endl;
        }
    }
    fileIn.close();
    fileOut.close();
    remove(fileName.c_str());
    rename("temp.dat", fileName.c_str());
    cout << "Record is deleted successfully" << endl;
    cout << "Press any key to main menu...";
    getch();
    mainMenu();
}

int Hotel::checkRoom(string r)
{
    int flag = 0;
    string room, name, phone, nights, fare;
    ifstream fin(fileName.c_str(), ios::in);
    while (fin >> room >> name >> phone >> nights >> fare)
    {
        if (room == r)
        {
            flag = 1;
            break;
        }
    }
    fin.close();
    return flag;
}

void clear()
{
    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
    std::cout << "\x1B[2J\x1B[H";
}