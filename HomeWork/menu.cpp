#include <iostream>
#include <string>
using namespace std;

int main() {
    int doAgain = false;
    int _passed = true;
    int _passed_2 = true;
    int __total_price = 0;
    int _mySelect = 1;
    int _want_egg;
    int jan = 0;


  do {
    cout << "===================================\n";
    cout << "[1] KAI MOO SUB = 45 BATH\n";
    cout << "[2] PAD KA PAO MOO SUB = 40 BATH\n";
    cout << "[3] PAD KA NA = 55 BATH\n";
    cout << "[4] PAD KA PAO MOO KORB = 55 BATH\n";
    cout << "[5] PAD PRIK KANG MOO = 45 BATH\n";
    cout << "[6] MOO TOD KA TIUM = 45 BATH\n";
    cout << "[0] TO EXIT\n";
    cout << "===================================\n";

    cout << "Plz Selct munu: ";
    cin >> _mySelect;
    switch (_mySelect) {
        case 0 :
        cout << "\nTHANK YOU FOR PURCHASE";
        cout << "\nYOUR TOTAL PRICE : " << __total_price;
        cout << "\nYOUR TOTAL JAN : " << jan;
        doAgain = false;
        break;
        
    case 1:
    __total_price = __total_price + 45; //! เปลี่ยนราคาเมนูด้วยนะจ๊ะกันลืมจร้า
    jan++;
        do
        {
            cout << "===================================\n";
            cout << "[1] U WANT KAI DOW 5 BATH\n";
            cout << "[2] U WANT KAI JEAW 10 BATH\n";
            cout << "[3] I DON'T WANT KAI\n";
            cout << "===================================\n";
            cout << "PLZ ENTER YOUR CHOICE: ";
            cin >> _want_egg;
            if (_want_egg == 1 ){
                __total_price = __total_price + 5;
                _passed = false;
                _passed_2 = true;
            }else if (_want_egg == 2){
                __total_price = __total_price + 10;
                _passed = false;
                _passed_2 = true;
            }else if (_want_egg == 3){
                _passed = false;
                _passed_2 = true;
            }else{
                _passed = true;
                cout << "===================================\n";
                cout << "[DEBUG] => YOUR CHOICE HAS NOT FOUND ;(\n";
                cout << "===================================\n";
                _passed_2 = false;
            }
        } while(_passed);

        do
        {
            cout << "===================================\n";
            cout << "DO YOU WANT TO BUY AGAIN\n";
            cout << "[1] BUY AGAIN\n";
            cout << "[2] EXIT PROGRAM\n";
            cout << "===================================\n";
            cout << "PLZ ENTER YOUR CHOICE :";
            cin >> _want_egg;

            if(_want_egg == 1 ){
                doAgain = true;
                _passed_2 = false;
            }else if (_want_egg == 2){
                doAgain = false;
                _passed_2 = false;
            }else {
                cout << "===================================\n";
                cout << "[DEBUG] => YOUR CHOICE HAS NOT FOUND ;(\n";
                cout << "===================================\n";
            }
        } while(_passed_2);
        
    break;

    case 2:
       __total_price = __total_price + 40; //! เปลี่ยนราคาเมนูด้วยนะจ๊ะกันลืมจร้า
       jan++;
        do
        {
            cout << "===================================\n";
            cout << "[1] U WANT KAI DOW 5 BATH\n";
            cout << "[2] U WANT KAI JEAW 10 BATH\n";
            cout << "[3] I DON'T WANT KAI\n";
            cout << "===================================\n";
            cout << "PLZ ENTER YOUR CHOICE: ";
            cin >> _want_egg;
            if (_want_egg == 1 ){
                __total_price = __total_price + 5;
                _passed = false;
                _passed_2 = true;
            }else if (_want_egg == 2){
                __total_price = __total_price + 10;
                _passed = false;
                _passed_2 = true;
            }else if (_want_egg == 3){
                _passed = false;
                _passed_2 = true;
            }else{
                _passed = true;
                cout << "===================================\n";
                cout << "[DEBUG] => YOUR CHOICE HAS NOT FOUND ;(\n";
                cout << "===================================\n";
                _passed_2 = false;
            }
        } while(_passed);

        do
        {
            cout << "===================================\n";
            cout << "DO YOU WANT TO BUY AGAIN\n";
            cout << "[1] BUY AGAIN\n";
            cout << "[2] EXIT PROGRAM\n";
            cout << "===================================\n";
            cout << "PLZ ENTER YOUR CHOICE :";
            cin >> _want_egg;

            if(_want_egg == 1 ){
                doAgain = true;
                _passed_2 = false;
            }else if (_want_egg == 2){
                doAgain = false;
                _passed_2 = false;
            }else {
                cout << "===================================\n";
                cout << "[DEBUG] => YOUR CHOICE HAS NOT FOUND ;(\n";
                cout << "===================================\n";
            }
        } while(_passed_2);
      break;

    case 3:
       __total_price = __total_price + 55; //! เปลี่ยนราคาเมนูด้วยนะจ๊ะกันลืมจร้า
       jan++;
        do
        {
            cout << "===================================\n";
            cout << "[1] U WANT KAI DOW 5 BATH\n";
            cout << "[2] U WANT KAI JEAW 10 BATH\n";
            cout << "[3] I DON'T WANT KAI\n";
            cout << "===================================\n";
            cout << "PLZ ENTER YOUR CHOICE: ";
            cin >> _want_egg;
            if (_want_egg == 1 ){
                __total_price = __total_price + 5;
                _passed = false;
                _passed_2 = true;
            }else if (_want_egg == 2){
                __total_price = __total_price + 10;
                _passed = false;
                _passed_2 = true;
            }else if (_want_egg == 3){
                _passed = false;
                _passed_2 = true;
            }else{
                _passed = true;
                cout << "===================================\n";
                cout << "[DEBUG] => YOUR CHOICE HAS NOT FOUND ;(\n";
                cout << "===================================\n";
                _passed_2 = false;
            }
        } while(_passed);

        do
        {
            cout << "===================================\n";
            cout << "DO YOU WANT TO BUY AGAIN\n";
            cout << "[1] BUY AGAIN\n";
            cout << "[2] EXIT PROGRAM\n";
            cout << "===================================\n";
            cout << "PLZ ENTER YOUR CHOICE :";
            cin >> _want_egg;

            if(_want_egg == 1 ){
                doAgain = true;
                _passed_2 = false;
            }else if (_want_egg == 2){
                doAgain = false;
                _passed_2 = false;
            }else {
                cout << "===================================\n";
                cout << "[DEBUG] => YOUR CHOICE HAS NOT FOUND ;(\n";
                cout << "===================================\n";
            }
        } while(_passed_2);
      break;
    case 4:
       __total_price = __total_price + 55; //! เปลี่ยนราคาเมนูด้วยนะจ๊ะกันลืมจร้า
       jan++;
        do
        {
            cout << "===================================\n";
            cout << "[1] U WANT KAI DOW 5 BATH\n";
            cout << "[2] U WANT KAI JEAW 10 BATH\n";
            cout << "[3] I DON'T WANT KAI\n";
            cout << "===================================\n";
            cout << "PLZ ENTER YOUR CHOICE: ";
            cin >> _want_egg;
            if (_want_egg == 1 ){
                __total_price = __total_price + 5;
                _passed = false;
                _passed_2 = true;
            }else if (_want_egg == 2){
                __total_price = __total_price + 10;
                _passed = false;
                _passed_2 = true;
            }else if (_want_egg == 3){
                _passed = false;
                _passed_2 = true;
            }else{
                _passed = true;
                cout << "===================================\n";
                cout << "[DEBUG] => YOUR CHOICE HAS NOT FOUND ;(\n";
                cout << "===================================\n";
                _passed_2 = false;
            }
        } while(_passed);

        do
        {
            cout << "===================================\n";
            cout << "DO YOU WANT TO BUY AGAIN\n";
            cout << "[1] BUY AGAIN\n";
            cout << "[2] EXIT PROGRAM\n";
            cout << "===================================\n";
            cout << "PLZ ENTER YOUR CHOICE :";
            cin >> _want_egg;

            if(_want_egg == 1 ){
                doAgain = true;
                _passed_2 = false;
            }else if (_want_egg == 2){
                doAgain = false;
                _passed_2 = false;
            }else{
                cout << "===================================\n";
                cout << "[DEBUG] => YOUR CHOICE HAS NOT FOUND ;(\n";
                cout << "===================================\n";
            }
        } while(_passed_2);
      break;

    case 5:
        __total_price = __total_price + 45; //! เปลี่ยนราคาเมนูด้วยนะจ๊ะกันลืมจร้า
        jan++;
         do
        {
            cout << "===================================\n";
            cout << "[1] U WANT KAI DOW 5 BATH\n";
            cout << "[2] U WANT KAI JEAW 10 BATH\n";
            cout << "[3] I DON'T WANT KAI\n";
            cout << "===================================\n";
            cout << "PLZ ENTER YOUR CHOICE: ";
            cin >> _want_egg;
            if (_want_egg == 1 ){
                __total_price = __total_price + 5;
                _passed = false;
                _passed_2 = true;
            }else if (_want_egg == 2){
                __total_price = __total_price + 10;
                _passed = false;
                _passed_2 = true;
            }else if (_want_egg == 3){
                _passed = false;
                _passed_2 = true;
            }else{
                _passed = true;
                cout << "===================================\n";
                cout << "[DEBUG] => YOUR CHOICE HAS NOT FOUND ;(\n";
                cout << "===================================\n";
                _passed_2 = false;
            }
        } while(_passed);

        do
        {
            cout << "===================================\n";
            cout << "DO YOU WANT TO BUY AGAIN\n";
            cout << "[1] BUY AGAIN\n";
            cout << "[2] EXIT PROGRAM\n";
            cout << "===================================\n";
            cout << "PLZ ENTER YOUR CHOICE :";
            cin >> _want_egg;

            if(_want_egg == 1 ){
                doAgain = true;
                _passed_2 = false;
            }else if (_want_egg == 2){
                doAgain = false;
                _passed_2 = false;
            }else {
                cout << "===================================\n";
                cout << "[DEBUG] => YOUR CHOICE HAS NOT FOUND ;(\n";
                cout << "===================================\n";
            }
        } while(_passed_2);
      break;

    case 6:
      __total_price = __total_price + 45; //! เปลี่ยนราคาเมนูด้วยนะจ๊ะกันลืมจร้า
      jan++;
        do
        {
            cout << "===================================\n";
            cout << "[1] U WANT KAI DOW 5 BATH\n";
            cout << "[2] U WANT KAI JEAW 10 BATH\n";
            cout << "[3] I DON'T WANT KAI\n";
            cout << "===================================\n";
            cout << "PLZ ENTER YOUR CHOICE: ";
            cin >> _want_egg;
            if (_want_egg == 1 ){
                __total_price = __total_price + 5;
                _passed = false;
                _passed_2 = true;
            }else if (_want_egg == 2){
                __total_price = __total_price + 10;
                _passed = false;
                _passed_2 = true;
            }else if (_want_egg == 3){
                _passed = false;
                _passed_2 = true;
            }else{
                _passed = true;
                cout << "===================================\n";
                cout << "[DEBUG] => YOUR CHOICE HAS NOT FOUND ;(\n";
                cout << "===================================\n";
                _passed_2 = false;
            }
        } while(_passed);

        do
        {
            cout << "===================================\n";
            cout << "DO YOU WANT TO BUY AGAIN\n";
            cout << "[1] BUY AGAIN\n";
            cout << "[2] EXIT PROGRAM\n";
            cout << "===================================\n";
            cout << "PLZ ENTER YOUR CHOICE :";
            cin >> _want_egg;

            if(_want_egg == 1 ){
                doAgain = true;
                _passed_2 = false;
            }else if (_want_egg == 2){
                doAgain = false;
                _passed_2 = false;
            }else{
                cout << "===================================\n";
                cout << "[DEBUG] => YOUR CHOICE HAS NOT FOUND ;(\n";
                cout << "===================================\n";
                _passed_2 = false;
            }
        } while(_passed_2);
      break;

    default:
      cout << "\n Your Select menu has Not Found\n";
      doAgain = false;
    }


  } while (doAgain);
    cout << "\n==========================";
    cout << "\nTHANK YOU FOR PURCHASE ;)";
    cout << "\nYOUR TOTAL PRICE : " << __total_price;
    cout << "\nYOUR TOTAL JAN : " << jan;
    cout << "\n==========================";

  return 0;
}