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
          
          



*/
#include <iostream>
#include <string>
using namespace std;


float score[20];
/* 
    TODO: Setting Your round na kub  
*/ 
int round_setting(int round = 20){
    return round;
}

/**
 * This function use to calculate grade and return grade 
  @param _input_score_from_student this is the score from input RQ:FUNCTION inputscore()
*/
string cal_grade(int _input_score_from_student)
{
    int my_score = _input_score_from_student;
    string _grade;

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
        _grade = "[!] ERROR GRADE NOT FOUND YOUR INPUT IS => " + to_string(my_score);
    }

    return _grade;
    
}

/**
 * This function use to loop for input 1 - 20
 @param round_to_loop THIS PARAM IS ROUND TO LOOP CAN SETTING IN round_setting() function()
*/

int input_score(int round_to_loop)
{

    int i = 1;
    while (i <= round_to_loop)
    {
        cout << "[" << i << "]" << " PLASE INPUT YOUR SCORE : ";
        cin >> score[i];
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

    input_score(round_setting(20)); //! START
    
    cout << "========== THIS IS YOUR GRADE ==========" << endl;
    for (int i = 0; i < round_setting(); i++)
    {
        cout << show_score_for_student(cal_grade(score[i]),i) << endl;
    }
    

    return 0;
}


