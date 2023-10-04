#include<iostream>
#include<string>
#include<time.h>
using namespace std;
int random();



string countgrade(int score,int &ca,int &cbp,int &cb,int &ccp,int &cc,int &cdp,int &cd,int &cf);
void display(int ca,int cbp,int cb,int ccp,int cc,int cdp,int cd,int cf);
int random()
{

    return (rand() % 100 +1 ); 
     
}
string countgrade(int score,int &ca,int &cbp,int &cb,int &ccp,int &cc,int &cdp,int &cd,int &cf)
{
    string grade;
    if(score >= 80)
        {
            ca++;
            grade = "A";
        }
        else if(score >= 75)
        {
            cbp++;
            grade = "B+";
        }
        else if(score >= 70)
        {
            cb++;
            grade = "B";
        }
        else if(score >= 65)
        {
            ccp++;
            grade = "C+";
        }
        else if(score >= 60)
        {
            cc++;
            grade = "C";
        }
        else if(score >= 55)
        {
            cdp++;
            grade = "D+";
        }
        else if(score >= 50)
        {
            cd++;
            grade = "D";
        }
        else{ 
            cf++;
            grade = "F"; 
        }
        return grade;
}
void display(int ca,int cbp,int cb,int ccp,int cc,int cdp,int cd,int cf)
{
        cout << "Result Num of Grade A  = " << ca << endl;
        cout << "Result Num of Grade B+ = " << cbp << endl;
        cout << "Result Num of Grade B  = " << cb << endl;
        cout << "Result Num of Grade C+ = " << ccp << endl;
        cout << "Result Num of Grade C  = " << cc << endl;
        cout << "Result Num of Grade D+ = " << cdp << endl;
        cout << "Result Num of Grade D  = " << cd << endl;
        cout << "Result Num of Grade F  = " << cf << endl;
}
int main()
{
    int score[100], count = 100, ca=0 ,cbp=0 , cb=0 , ccp=0 , cc=0 , cdp=0 , cd=0 ,cf=0 ;
    string grade[100];
    srand((unsigned int) time(0));
    cout << time(0) % 100 + 1 << endl;


    for (int i = 0; i < count; i++)
    {

        score[i] = random();
        grade[i] = countgrade(score[i],ca,cbp,cb,ccp,cc,cdp,cd,cf);
       
       
    }


    for (int i = 0; i < count; i++)
    {
        cout << "Round : [" <<  i << "]" <<  endl;
        cout << "Score : " << score[i] << endl;
        cout << "Grade : " << grade[i] << endl << endl;
    }

    display(ca,cbp,cb,ccp,cc,cdp,cd,cf);
       
    
    // return 0;
}