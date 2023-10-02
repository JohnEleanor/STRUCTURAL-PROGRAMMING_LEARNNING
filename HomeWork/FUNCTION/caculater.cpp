#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool plush_function();
bool minus_function();
bool multiple_function();
bool divide_function();
bool mod_function();
bool power_function();
bool sin_function();
bool cos_function();
bool tan_function();
bool sqrt_function();

int main(int argc, const char **argv)
{
    int _menu_select;
    do
    {
        cout << "========================\n";
        cout << "====== calculate ======\n";
        cout << "========================\n";
        cout << "[1] + \n";
        cout << "[2] - \n";
        cout << "[3] * \n";
        cout << "[4] / \n";
        cout << "[5] mod \n";
        cout << "[6] power \n";
        cout << "[7] sin \n";
        cout << "[8] cos \n";
        cout << "[9] tan \n";
        cout << "[10] square root \n";
        cout << "[0] EXIT \n";

        cout << "Select your function : ";
        cin >> _menu_select;

        if (_menu_select == 1)
        {

            bool plush = plush_function();

            if (plush)
            {

                string do_again;
                do
                {
                    cout << "You want to do again (Y/n) : ";
                    cin >> do_again;

                    if (do_again == "Y" || do_again == "y")
                    {
                        plush_function();
                    }
                    else
                    {
                        cout << "[+] EXIT FUNCTION 1 \n";
                    }

                } while (do_again == "Y" || do_again == "y");
            }
        }
        else if (_menu_select == 2)
        {
           bool plush = minus_function();

            if (plush)
            {

                string do_again;
                do
                {
                    cout << "You want to do again (Y/n) : ";
                    cin >> do_again;

                    if (do_again == "Y" || do_again == "y")
                    {
                        minus_function();
                    }
                    else
                    {
                        cout << "[+] EXIT FUNCTION 1 \n";
                    }

                } while (do_again == "Y" || do_again == "y");
            }
        }
        else if (_menu_select == 3)
        {
            bool plush = multiple_function();

            if (plush)
            {

                string do_again;
                do
                {
                    cout << "You want to do again (Y/n) : ";
                    cin >> do_again;

                    if (do_again == "Y" || do_again == "y")
                    {
                        multiple_function();
                    }
                    else
                    {
                        cout << "[+] EXIT FUNCTION 1 \n";
                    }

                } while (do_again == "Y" || do_again == "y");
            }
        }
        else if (_menu_select == 4)
        {
            
            bool plush = divide_function();

            if (plush)
            {

                string do_again;
                do
                {
                    cout << "You want to do again (Y/n) : ";
                    cin >> do_again;

                    if (do_again == "Y" || do_again == "y")
                    {
                        divide_function();
                    }
                    else
                    {
                        cout << "[+] EXIT FUNCTION 1 \n";
                    }

                } while (do_again == "Y" || do_again == "y");
            }
        }
        else if (_menu_select == 5)
        {
            bool plush = mod_function();

            if (plush)
            {

                string do_again;
                do
                {
                    cout << "You want to do again (Y/n) : ";
                    cin >> do_again;

                    if (do_again == "Y" || do_again == "y")
                    {
                        mod_function();
                    }
                    else
                    {
                        cout << "[+] EXIT FUNCTION 1 \n";
                    }

                } while (do_again == "Y" || do_again == "y");
            }
        }
        else if (_menu_select == 6)
        {
             bool plush = power_function();

            if (plush)
            {

                string do_again;
                do
                {
                    cout << "You want to do again (Y/n) : ";
                    cin >> do_again;

                    if (do_again == "Y" || do_again == "y")
                    {
                        power_function();
                    }
                    else
                    {
                        cout << "[+] EXIT FUNCTION 1 \n";
                    }

                } while (do_again == "Y" || do_again == "y");
            }
        }
        else if (_menu_select == 7)
        {
            bool plush = sin_function();

            if (plush)
            {

                string do_again;
                do
                {
                    cout << "You want to do again (Y/n) : ";
                    cin >> do_again;

                    if (do_again == "Y" || do_again == "y")
                    {
                        sin_function();
                    }
                    else
                    {
                        cout << "[+] EXIT FUNCTION 1 \n";
                    }

                } while (do_again == "Y" || do_again == "y");
            }
        }
        else if (_menu_select == 8)
        {
            bool plush = cos_function();

            if (plush)
            {

                string do_again;
                do
                {
                    cout << "You want to do again (Y/n) : ";
                    cin >> do_again;

                    if (do_again == "Y" || do_again == "y")
                    {
                        cos_function();
                    }
                    else
                    {
                        cout << "[+] EXIT FUNCTION 1 \n";
                    }

                } while (do_again == "Y" || do_again == "y");
            }
        }
        else if (_menu_select == 9)
        {
            bool plush = tan_function();

            if (plush)
            {

                string do_again;
                do
                {
                    cout << "You want to do again (Y/n) : ";
                    cin >> do_again;

                    if (do_again == "Y" || do_again == "y")
                    {
                        tan_function();
                    }
                    else
                    {
                        cout << "[+] EXIT FUNCTION 1 \n";
                    }

                } while (do_again == "Y" || do_again == "y");
            }
        }
        else if (_menu_select == 10)
        {
            bool plush = sqrt_function();

            if (plush)
            {

                string do_again;
                do
                {
                    cout << "You want to do again (Y/n) : ";
                    cin >> do_again;

                    if (do_again == "Y" || do_again == "y")
                    {
                        sqrt_function();
                    }
                    else
                    {
                        cout << "[+] EXIT FUNCTION 1 \n";
                    }

                } while (do_again == "Y" || do_again == "y");
            }
        }
        else if (_menu_select == 0)
        {
            cout << "Thank You ;) \n";
            _menu_select = 0;
        }
        else
        {
            cout << "=== Menu Does not Exit ===\n";
        }

    } while (!(_menu_select == 0));

    return 0;
}

bool plush_function()
{

    int P[2];
    cout << "=== This is Menu [1] ===\n";
    cout << "Plase Enter Your First Number : ";
    cin >> P[0];
    cout << "Plase Enter Your Second Number : ";
    cin >> P[1];
    cout << "This is Your answer : " << P[0] + P[1] << endl;

    return true;
}

bool minus_function()
{

    int M[2];
    cout << "=== This is Menu [2] ===\n";
    cout << "Plase Enter Your First Number : ";
    cin >> M[0];
    cout << "Plase Enter Your Second Number : ";
    cin >> M[1];
    cout << "This is Your answer : " << M[0] - M[1] << endl;

    return true;
}

bool multiple_function()
{

    int m[2];
    cout << "=== This is Menu [3] ===\n";
    cout << "Plase Enter Your First Number : ";
    cin >> m[0];
    cout << "Plase Enter Your Second Number : ";
    cin >> m[1];
    cout << "This is Your answer : " << m[0] * m[1] << endl;

    return true;
}


bool divide_function() {
    int d[2];
    cout << "=== This is Menu [4] ===\n";
    cout << "Plase Enter Your First Number : ";
    cin >> d[0];
    cout << "Plase Enter Your Second Number : ";
    cin >> d[1];
    cout << "This is Your answer : " << d[0] / d[1] << endl;

    return true;
}

bool mod_function() {
    int d[2];
    cout << "=== This is Menu [5] ===\n";
    cout << "Plase Enter Your First Number : ";
    cin >> d[0];
    cout << "Plase Enter Your Second Number : ";
    cin >> d[1];
    cout << "This is Your answer : " << d[0] % d[1] << endl;

    return true;
}

bool power_function() {
    int num[2];
    cout << "=== This is Menu [6] ===\n";
    cout << "Plase Enter Your Number : ";
    cin >> num[0];
    cout << "Plase Enter Your Power Number : ";
    cin >> num[1];
    cout << "Your Awnser is : " << pow(num[0], num[1]) << endl;

    return true;
}

// ---------


bool sin_function() {
    int num;
    cout << "=== This is Menu [7] ===\n";
    cout << "Plase Enter Your Number : ";
    cin >> num;
    cout << "Your Awnser is : " << sin(num) << endl;

    return true;
}

bool cos_function() {
    int num;
    cout << "=== This is Menu [8] ===\n";
    cout << "Plase Enter Your Number : ";
    cin >> num;
    cout << "Your Awnser is : " << cos(num) << endl;


    return true;
}

bool tan_function() {
    int num;
    cout << "=== This is Menu [9] ===\n";
    cout << "Plase Enter Your Number : ";
    cin >> num;
    cout << "Your Awnser is : " << tan(num) << endl;

    return true;
}

bool sqrt_function() {
    int num;
    cout << "=== This is Menu [10] ===\n";
    cout << "Plase Enter Your Number : ";
    cin >> num;
    cout << "Your Awnser is : " << sqrt(num) << endl;

    return true;
}