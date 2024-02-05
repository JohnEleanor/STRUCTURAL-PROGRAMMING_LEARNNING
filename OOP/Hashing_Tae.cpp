#include <iostream>
using namespace std;

    int hashing(const string &key, int tableSize);

    int main()
    {
        string name = "CHOTIROS SUWANSOOT";
        string a[7];
        int x;
        int tableSize = sizeof(a) / sizeof(a[0]);
        x = hashing(name, tableSize);
        a[x] = name;
        for (int i = 0; i < tableSize; i++)
            cout << "HashTable a[" << i << "]  : " << a[i] << "\n";

        return 0;
    }

    int hashing(const string &key, int tableSize)
    {
        int hashVal = 0;
        for (int i = 0; i < key.length(); i++)
            hashVal += key[i];
        cout << "Hash Value Tae : " << hashVal % tableSize << endl;
        return hashVal % tableSize;

        
    }