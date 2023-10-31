#include <iostream>
#include <string>
using namespace std;
int grade[20];
string gradescore[20];
string calgrade(float score);
float input();
void display();
int main()
{
    input();
    cout << "-----------------------" << endl;
    for (int i = 0; i < 20; i++)
    {
        //cout << calgrade(grade[i]) ;
        gradescore[i] = calgrade(grade[i]) ;
    }

    display();
    
}
string calgrade(float score)
{   for (int i = 0; i < 20; i++)
    {   
    string yourg ;
    if(score >= 0 && score <= 49 ){
        yourg = "F";
    }else if(score >= 50 && score <= 54 ){
        yourg = "D";
    }else if(score >= 55 && score <= 59 ){
        yourg = "D+";
    }else if(score >= 60 && score <= 64 ){
        yourg = "C";
    }else if(score >= 65 && score <= 69 ){
        yourg = "C+";
    }else if(score >= 70 && score <= 74 ){
        yourg = "B";
    }else if(score >= 75 && score <= 79 ){
        yourg = "B+";
    }else if(score >= 80 && score <= 100 ){
        yourg = "A";
    }else{
        yourg = "Error";
    }
    return(yourg);
    }
}

float input()
{
    //array 20 คน
    for (int i = 0; i < 20; i++)
    {   
        cout << i+1 << ". Enter grade : " ;
        cin >> grade[i] ;
    }
    return(0);
}

void display()
{
 
    for (int i = 0; i < 20; i++)
    {   
        cout << i+1 << ". grade : " << gradescore[i] <<endl;
    }
    
}
