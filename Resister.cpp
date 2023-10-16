#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int x, amount = 0, amount_col = 0, type = 0;
    int color[3][5];
    float calculate[3], ans = 0;
    string code_col[12] = {"Black ", "Brown ", "Red   ", "Orange", "Yellow", "Green ", "Blue  ", "Purple", "Gray  ", "White  ", "Gold  ", "Silver"};

    do
    {
        do
        {
            cout << "Enter amount of resister (Max 3): ";
            cin >> amount;
            if ((amount >= 1) && (amount <= 3))
                break;
            cout << " Invaid value.\n";
        } while (true);

        do
        {
            cout << "Choose the amount resister code\n 4 colors or 5 colors\n";
            cin >> amount_col;
            if ((amount_col >= 4) && (amount_col <= 5))
                break;
            cout << " Invaid value.\n";
        } while (true);

        do
        {
            cout << "Choose type of system\n1.Series  2.Pallarel \nEnter type : ";
            cin >> type;
            if ((type >= 1) && (type <= 2))
                break;
            cout << " Invaid value.\n";
        } while (true);

        for (int i = 0; i < 12; i = i + 2)
        {
            cout << setw(3) << i << ". " << setw(6) << code_col[i] << setw(5) << i + 1 << ". " << setw(6) << code_col[i + 1] << endl;
        }

        for (int i = 0; i < amount; i++)
        {
            cout << "Choose the code color of resister (" << i + 1 << ")\n";
            for (int j = 0; j < amount_col; j++)

            {
                do
                {
                    cout << "Choose the code color (" << j + 1 << ") : ";
                    cin >> color[i][j];
                    if ((color[i][j] >= 0) && (color[i][j] <= 11))
                        break;
                    cout << " Invaid value.\n";
                } while (true);
            }
        }

        if (amount_col == 4)
        {
            for (int i = 0; i < amount; i++)
            {
                calculate[i] = (color[i][0] * 10 + color[i][1]) * (pow(10, (color[i][2])));
                cout << "resister " << i + 1 << " : " << code_col[color[i][0]] << "  " << code_col[color[i][1]] << "  " << code_col[color[i][2]] << " : " << calculate[i] << " Ohm  " << endl;
            }
        }

        else if (amount_col == 5)
        {
            for (int i = 0; i < amount; i++)
            {
                calculate[i] = ((color[i][0] * 100 + (color[i][1] * 10)) + color[i][2]) * (pow(10, (color[i][3])));
                cout << "resister " << i + 1 << " : " << code_col[color[i][0]] << "  " << code_col[color[i][1]] << "  " << code_col[color[i][2]] << "  " << code_col[color[i][3]] << " : " << calculate[i] << " Ohm  " << endl;
            }
        }

        if (type == 1)
        {
            ans = calculate[0] + calculate[1] + calculate[2];
        }
        else if ((type == 2) && (amount == 1))
        {
            ans = calculate[0];
        }
        else if ((type == 2) && (amount == 2))
        {
            ans = (calculate[0] * calculate[1]) / (calculate[0] + calculate[1]);
        }
        else if ((type == 2) && (amount == 3))
        {
            ans = (((calculate[0] * calculate[1]) / (calculate[0] + calculate[1])) * calculate[2]) / (((calculate[0] * calculate[1]) / (calculate[0] + calculate[1])) + calculate[2]);
        }

        cout << endl;
        cout << endl;
        cout << "Total Resister : " << ans << " Ohm\n\n";

        do
        {
            cout << "Continue?\n1.Yes 2.No\n Enter choice >> ";
            cin >> x;
            if ((x == 1) || (x == 2))
                break;
            cout << " Invaid value.\n\n";
        } while (true);

        if (x == 2)
        {
            cout << " Exit Program.";
            return (0);
        }
    } while (true);

    return (0);
}