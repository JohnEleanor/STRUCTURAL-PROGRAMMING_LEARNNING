#include <iostream>
using namespace std;

int main(int argc, const char** argv) {
    int i = 100, j = 200, counter = 0;
    do
    {
        i = i + 2;
        j = j - 3;
        counter++;
        cout << " I =  " << i << " J = " << j << " counter = " << counter << endl;
    } while(i!=j);
    cout << " I =  " << i << " J = " << j << " counter = " << counter;
    return 0;
}