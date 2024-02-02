#include <iostream>
using namespace std;

int calgrade(int param)
{

    cout << param;
    return (param + 5);
}


int main() {


    int cal = calgrade(5);



    cout << endl << cal ;



    return 0;
}

