/*
    ?[🧠] Std_name: Chotiros Suwansoot
    ?[🧠] Std_id: C6606021420148


    /$$$$$
   |__  $$
      | $$
      | $$
 /$$  | $$
| $$  | $$
|  $$$$$$/
 \______/ 
          
        *Instructions
    *จงเขียนโปรแกรมตัดเกรดแบบ 8 เกรดที่มีการเรียกใช้ฟังก์ชันดังนี้
    ? - ฟังก์ชัน input ใช้ในการรับค่าจากผู้ใช้ของนักศึกษา 1 คนมีการคืนค่าข้อมูลกลับเป็นชนิดตัวเลขทศนิยม
    ? - function calgrade ใช้สำหรับคำนวณเกรดจากคะแนนที่ส่งมาของนักศึกษา 1 คนและมีการคืนค่าเป็นข้อความที่เป็นเกรดของนักศึกษา
    ? - ฟังกชัน Display ใช้สำหรับแสดงข้อมูลของนักศึกษาจำนวน 1 คน
    !โดยโปรแกรมกำหนดให้รับค่าคะแนนของนักศึกษามาจำนวน 20 คน 
    !ทำการเรียกใช้ฟังก์ชันทั้ง 3 ด้านบนเพื่อหาเกรดของนักศึกษานำมาแสดงบนหน้าจอทั้ง 20 คน   



*/

#include <iostream>
#include <string>
using namespace std;

// เปลี่ยน float score[20]; เข้าไปอยู่ใน input_score เเล้วมีการเรีนก
float score[20];



string CheckScope; //ใช้ในการเช็ค Scope 0-100  (Y/n)
bool CheckScope_Score = true; //เช็คว่า

//! IF YOU WANT DEBUG -
bool DEBUG_CHOTIROS_CODE = false;
/* 
    TODO: Setting Your round na kub  
*/ 
int round_setting(int round = 20){
    return round;
}

/**
 * function นี้ใช่คำนวณเกรดเเละ return เกรดกลับไป
  @param _input_score_from_student this is the score from input RQ:FUNCTION inputscore()
*/
string cal_grade(int _input_score_from_student)
{
    int my_score = _input_score_from_student;
    string _grade;
    // cout << my_score << endl;

    if (my_score >= 80 && my_score <= 100) {
        return _grade = "A";
    }

    if (my_score >= 75 && my_score <= 79) {
        return _grade = "B+";
    }

    if (my_score >= 70 && my_score <= 74) {
        return _grade = "B";
    }

    if (my_score >= 65 && my_score <= 69) {
        return _grade = "C+";
    }

    if (my_score >= 60 && my_score <= 64) {
       return _grade = "C";
    }

    if (my_score >= 55 && my_score <= 59) {
        return _grade = "D+";
    }

    if (my_score >= 50 && my_score <= 54) {
       return  _grade = "D";
    }

    if (my_score <= 49) {
        return _grade = "F";
    }

    if (_grade == ""){
        if (DEBUG_CHOTIROS_CODE == true){
            _grade = "[!] ERROR GRADE NOT FOUND YOUR INPUT IS => " + to_string(my_score);
        }else {
            _grade = "ERROR";
        }

        
    }

    return _grade;
    
}

/**
 * function นี้ใช้สำหรับ loop รับค่าจากผู่ใช้งาน
 @param round_to_loop THIS PARAM IS ROUND TO LOOP CAN SETTING IN round_setting() function()
*/

int input_score(int round_to_loop, string CheckScope_Score = "n")
{

    if (DEBUG_CHOTIROS_CODE) {
        cout << "[Debug]:input_score() => CheckScope_Score = " << CheckScope_Score << endl;
    }
    
    int i = 1;
    while (i <= round_to_loop)
    {
      
        if (CheckScope_Score == "Y" or CheckScope_Score == "y"){

            if (DEBUG_CHOTIROS_CODE) {
                cout << "Do with Check " << endl;
            }

            //! this while to check scope 1-100
            do
            {
                if (!(score[i] >= 0 and score[i] <= 100)){
                    cout << "========== TRY TO ENTER YOUR SCORE " << "[" << i << "] ==========" << endl;
                }

                cout << "[" << i << "]" << " PLASE INPUT YOUR SCORE : ";
                cin >> score[i];
            } while(!(score[i] >= 0 and score[i] <= 100));


        }else{
            cout << "[" << i << "]" << " PLASE INPUT YOUR SCORE : ";
            cin >> score[i];
        }
       
        i++;  
        
        

    }
    return 0;

    
}

/**
 *? this function use to concate and return concate to show 
 @param _grade this is the score from input
 @param student_id this is a student id 
*/

string show_score_for_student(string _grade, int student_id)
{
    int _THIS_IS_CONVERT_4_REAL_1 = student_id + 1;
    string std_id = to_string(_THIS_IS_CONVERT_4_REAL_1);
    string text_ssss = "[" +  std_id + "] This is : " + _grade  ;
    return text_ssss;
}


int main()
{

    do
    {
        cout << "Do You Want To Check Scope Score [0-100] (Y/n) : ";
        cin >> CheckScope;

      

    } while(CheckScope != "Y" and CheckScope != "y" and CheckScope!= "N" and CheckScope != "n");


    input_score(round_setting(20), CheckScope); //! START
    
    cout << "========== THIS IS YOUR GRADE ==========" << endl;
    for (int i = 0; i < round_setting(); i++)
    {
        cout << show_score_for_student(cal_grade(score[i]),i) << endl;
    }
    

    return 0;
}


