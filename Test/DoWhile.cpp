#include <iostream>
using namespace std;
int main()
{
    int choice;
    do
    {
        cout << "Enter choice " << endl;
        cout << "1.THB > USD" << endl;
        cout << "2.USD > THB" << endl;
        cout << "0.END" << endl;
        cin >> choice;
    } while (choice == 0); //! ทำจนกว่าเงื้อนไขเป็นเท็จ

   
  

    return 0;
}