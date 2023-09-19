#include <iostream>
using namespace std;
int main(){
    int water, teaPowder, honey, gaghuy, sucrose, teaGag = 0, greentea = 0;

    for (int day = 1; day <= 7; day++)
    {
        cout << "Day " << day << endl;
        cout << "water : ";
        cin >> water;
        cout << "teaPowder : ";
        cin >> teaPowder;
        cout << "honey : ";
        cin >> honey;
        cout << "gaghuy : ";
        cin >> gaghuy;
        cout << "sucrose : ";
        cin >> sucrose;
        
        while (water >= 200 & teaPowder >= 50 & gaghuy >= 75 & honey >= 25 & sucrose >= 25)
        {
            teaGag += 1;
            water -= 200, teaPowder -= 50, gaghuy -= 75, honey -= 25, sucrose -= 25;
        }
        
        while (water >= 200 & teaPowder >= 50 & honey >= 25)
        {
            greentea += 1;
            water -= 200, teaPowder -= 50, honey -= 25;
        }

        cout << endl << "supply total" << endl;
        cout << "water : " << water << endl;
        cout << "teaPowder : " << teaPowder << endl;
        cout << "honey : " << honey << endl;
        cout << "gaghuy : " << gaghuy << endl;
        cout << "sucrose : " << sucrose << endl << endl;
    }

    cout << "Tea total" << endl;
    cout << "TeaGaghuy : " << teaGag << endl;
    cout << "GreenTea : " << greentea << endl;

}