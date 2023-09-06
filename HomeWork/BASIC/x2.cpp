#include <iostream>
#include <string>
#include <iomanip> // setfill(), setw(), setprecision()
using namespace std;

int main()
{
    int number;
    bool input_num = true;
    while (input_num)
    {
        cout << "Enter number : ";
        cin >> number;
        if (number >= 2 && number <= 50)
        {
            input_num = false;
        }
    }

    const int WIDTH = 8;
    const int WIDTH_SPACE = 4;
    int text_len, fulltext_len = 0;
    string text = "";
    string full_text = "";
    cout << "+" << setfill('=') << setw(18) << "+";
    cout << setfill(' ') << setw(WIDTH_SPACE) << "+" << setfill('=') << setw(18) << "+";
    cout << setfill(' ') << setw(WIDTH_SPACE) << "+" << setfill('=') << setw(18) << "+" << endl;

    cout << ": " << setfill(' ') << setw(WIDTH) << number << setw(WIDTH + 1) << " :";
    cout << setfill(' ') << setw(WIDTH_SPACE + 1) << ": " << setfill(' ') << setw(WIDTH) << number + 1 << setw(WIDTH + 1) << " :";
    cout << setfill(' ') << setw(WIDTH_SPACE + 1) << ": " << setfill(' ') << setw(WIDTH) << number + 2 << setw(WIDTH + 1) << " :" << endl;

    cout << "+" << setfill('=') << setw(18) << "+";
    cout << setfill(' ') << setw(WIDTH_SPACE) << "+" << setfill('=') << setw(18) << "+";
    cout << setfill(' ') << setw(WIDTH_SPACE) << "+" << setfill('=') << setw(18) << "+" << endl;

    cout << setfill(' ');
    for (int i = 1; i <= 12; i++)
    {
        // text line1
        text = ": " + to_string(number) + " x " + to_string(i);
        text_len = text.length();
        cout << text << setw(12 - text_len) << " = " << number * i;

        full_text = text + " = " + to_string(number * i);
        fulltext_len = full_text.length() + (12 - text_len);
        cout << setw(22 - fulltext_len) << " :";
    }
}