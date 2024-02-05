#include <iostream>
using namespace std;

class HashingForLearning
{

public:
    int hash(const string &key, int TableSize)
    {
     
        int hashVal = 0;
        for (int i = 0; i <= key.length(); i++)
        {
            hashVal += key[i]; 
        }

        // cout << "Hash Value J :  " << hashVal % TableSize << endl; // Debugging
        
        return hashVal % TableSize;
    }


    void printHashTable(const string a[], int TableSize)
{
    for (int i = 0; i < TableSize; i++)
    {
        cout << "HashTable a[" << i << "]  : " << a[i] << "\n";
    }
}
};

int main()
{
    int Result;
    int TableSize = 7;
    string key = "CHOTIROS SUWANSOOT";
    string a[7];

    HashingForLearning ThisIsMyObjectNaja;

    Result = ThisIsMyObjectNaja.hash(key, TableSize);
    a[Result] = key;

    ThisIsMyObjectNaja.printHashTable(a, TableSize);

    return 0;
}