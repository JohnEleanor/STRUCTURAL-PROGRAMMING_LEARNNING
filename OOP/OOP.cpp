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

        
        return hashVal % TableSize;
    }
};

int main(int argc, const char **argv)
{
    int Result = 0;
    int TableSize = 7;
    string key = "CHOTIROS SUWANSOOT";

    
    HashingForLearning ThisIsMyObjectNaja;

    Result = ThisIsMyObjectNaja.hash(key, TableSize);

    for (int i = 0; i <= 7; i++)
    {
        if ( (key.length() % TableSize) == i ){

            cout << "HashTable [" << i << "]: " << key << endl;
        }else {
            cout << "HashTable [" << i << "]: " << endl;
        }
        
    }
    return 0;
}