#include <iostream>
using namespace std; 

/*
 ! arrary[row][column]
*/ 

int calgade(int score[][3] ) {
    return 0;
}


int main() {
    const int Test = 3;
    int numberOfStudent;

    cout << "Numbers of students : ";
    cin >> numberOfStudent;


    int Stundent[Test][3];


    int i,j;
    for ( i = 0; i < Test; i++)
    {   
        
        for (j = 0; j < numberOfStudent; j++)
        {
          
           

        do
        {
            cout << "Please input score of Stundent " << i+1 << " of : Test " << j+1 << " : ";
            cin >> Stundent[i][j]; 
            
            if (Stundent[i][j] > 100) 
            {
                system("CLS");
                cout << "SCORE OUT OF LIMIT ( Plase Try Again ) ;( " << endl;
                cout << "" << endl;
            }
            
        } while(Stundent[i][j] > 100);

    

        }
        
    }



    // ! DEBUG
    for ( i = 0; i < Test; i++)
    {   
        
        for (j = 0; j < numberOfStudent; j++)
        {
          
        calgade(Stundent);
            cout << "Student [" << i+1 << "] Score At test " << j+1 << " : " << Stundent[i][j] << endl;
            

        }

    }



    return 0;
}




