/*
    ?🧠 Std_name: Chotiros 
    ?🧠 Std_id: C6606021420148


    /$$$$$
   |__  $$
      | $$
      | $$
 /$$  | $$
| $$  | $$
|  $$$$$$/
 \______/ 
          
          



*/ 


#include <iostream>

using namespace std;

int main()
{

    int n[5];
    int __this_is_my_count_for_wat = 5;

    int i;

    for (i = 0; i < __this_is_my_count_for_wat; i++)
    {
        cout << "PLASE ENTER YOUR FIVE NUMBER : ";
        cin >> n[i];
    }

    int J;
    cout << "===========" << endl;


    for (J = 0; J < __this_is_my_count_for_wat; J++)
    {

        int x;
        cout << n[J] << " : ";
        for (x = 0; x < n[J]; x++)
        {
            cout << '*';
        }
        cout << endl;
    }
    cout << "===========";

    return 0;
}