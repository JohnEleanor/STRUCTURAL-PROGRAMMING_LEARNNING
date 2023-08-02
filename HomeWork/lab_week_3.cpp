// s6606021420148 Chotiros 
#include <iostream>
using namespace std;
int main() {
  int pen , pencil , ruler;
  int total_price;
  int __case;
  cout << "WHAT YOU WANT TO BUY";
  cout << "\nHOW MANY 'PEN' YOU WANT TO BUY: ";
  cin >> pen;
  cout << "\nHOW MANY 'PENCIL' YOU WANT TO BUY: ";
  cin >> pencil;
  cout << " \nHOW MANY 'RULER' YOU WANT TO BUY: ";
  cin >> ruler;

  pen = pen * 5;
  pencil = pencil * 2;
  ruler = ruler * 8;

  total_price = pen + pencil + ruler;


  if (total_price > 201 and total_price < 300 and pen %2 == 0 and pencil % 2 == 0 and ruler %2 == 0){
    __case = 1;
  }else if (total_price > 100 and total_price < 200 and ruler % 2 == 0 and pencil % 2 == 0 and pen % 2 != 0)  {
    __case = 2;
  }else if (total_price < 100 and ruler % 2 == 0){ 
    __case = 3;
  }else{
    __case = 0;
  
  }


  switch(__case) {
  case 1:
    cout << "\nOrder Is OK";
    cout << "\nTHIS IS TOTAL " << total_price;
    break;
  case 2:
    cout << "\nOrder Is OK";  
    cout << "\nTHIS IS TOTAL " << total_price;
    break;
  case 3:
    cout << "\nOrder Is OK";
    cout << "\nTHIS IS TOTAL " << total_price;
    break;
  default:
    cout << "\nInvalid Order";
  }
  

  
}