#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
  int count = 20;
  char id[20][5], name[20][20];    // เพื่อเช็คค่า ทุกตัวไม่ว่าง
  float score[20][3], test[20][3]; // 3row 3cl

  for (int i = 0; i < count; i++)
  {

    for (int setting_id_round = 0; setting_id_round < 5; setting_id_round++)
    {
      cout << "Please Enter [ ID ] for Student No.[" << i + 1 << "] In Arrary " << setting_id_round << " : ";
      cin >> id[i][setting_id_round];
    }
  

    cout << "Please Enter [ Name ] for Student No.[" << i + 1 << "] : ";
    cin >> name[i];

    
    for (int j = 0; j < 3; j++)
    {
      cout << "Please Enter [ Score ] " << j + 1 << "for Student No. [" << i + 1 << "] : ";
      cin >> score[i][j];   
    }
  }

  for (int i = 0; i < count; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (j == 1 || j == 0)
      {
        test[i][j] = score[i][j] / 4;
      }
      else
      {
        test[i][j] = score[i][j] / 2;
      }
      test[i][3] == test[i][0] + test[i][1] + test[i][2];
    }
    for (int i = 0; i < count; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        test[21][j] = test[21][i] + test[i][j];
      }
    }
    test[21][0] = test[21][0] / count;
    test[21][1] = test[21][1] / count;
    test[21][2] = test[21][2] / count;
    test[21][3] = test[21][3] / count;
  }

  cout << "---------------------------------------------------------------------------" << endl; 
  cout << setw(5) << setfill(' ')<< "No." << setw(10) << setfill(' ') << "Id" << setfill(' ') << setw(10) << "Name" << setfill(' ') << setw(20) << " Test1(25%)" << setfill(' ') << setw(5) << " Test2(25%)" << setfill(' ') << setw(5) << " Test3(50%)"  << setfill(' ') << setw(5) << " Total(100%)"<< endl;
  cout << "---------------------------------------------------------------------------" << endl;
  
  for (int i = 0; i < count; i++)
  {

    cout << i+1 << setw(10) << setfill(' ') << setw(10) << setfill(' ') << id[i][i] << setw(10) << setfill(' ') << name[i][i] << endl;

  }

  cout << "---------------------------------------------------------------------------" << endl;
  cout << "Average of mark " << setw(50);
  system("PAUSE");
  return (0);
}
