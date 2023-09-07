/*
    ?🧠 Std_name: Chotiros 
    ?🧠 Std_id: C6606021420148


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
     @param _input_score_from_student this is the score from input RQ:FUNCTION inputscore()
*/
string cal_grade(int _input_score_from_student)
{
    int my_score = _input_score_from_student;
    string _grade;

    if (my_score >= 80 && my_score <= 100) {
        _grade = "A";
    }

    if (my_score >= 75 && my_score <= 79) {
        _grade = "B+";
    }

    if (my_score >= 70 && my_score <= 74) {
        _grade = "B";
    }

    if (my_score >= 65 && my_score <= 69) {
        _grade = "C+";
    }

    if (my_score >= 60 && my_score <= 64) {
        _grade = "C";
    }

    if (my_score >= 55 && my_score <= 59) {
        _grade = "D+";
    }

    if (my_score >= 50 && my_score <= 54) {
        _grade = "D";
    }

    if (my_score <= 49) {
        _grade = "F";
    }

    if (_grade == ""){
        _grade = "[+] ERROR GRADE NOT FOUND => " + to_string(my_score);
    }


    return _grade;
}

/**
 @param _input_score this is the score from input RQ:input
*/

int input_score(int round_to_loop)
{

    int i = 1;
    while (i <= round_to_loop)
    {
        cout << "[" << i << "]" << "PLZ INPUT YOUR SCORE : ";
        cin >> score[i];
        i++;

    }
    return 0;

    
}

/**
 @param _grade this is the score from input RQ:input
*/
string show_score_for_student(string _grade, int student_id)
{

    string std_id = to_string(student_id);
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


