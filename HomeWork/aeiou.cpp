#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, result;
    getline(cin,input);

    for (char charecter : input)
    {
        char lower = tolower(charecter);

        if (lower != 'a' and lower != 'e' and lower != 'i' and lower != 'o' and lower != 'u')
        {
            //? ถ้าไม่ใช่ สระ จะ
            result += lower;
        } 
    }
    cout << result << '\n';

    return 0;
}