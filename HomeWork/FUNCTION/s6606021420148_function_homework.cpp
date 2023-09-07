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
string cal_grade(int _input_score_from_student);
float input_score(int _input_score);
string show_score_for_student(string _grade);


int main()
{
    int score[20] = {};
    float convert_score[20] = {};
    string calculate_score[20] = {};
    int i = 1;
    while (i <= 20)
    {
        cout << "[" << i << "]"
             << "PLZ INPUT YOUR SCORE : ";
        cin >> score[i];
        i++;
    }
    cout << "========== THIS IS YOUR GRADE ==========" << endl;
    for (int i = 1; i <= 20; i++)
    {
        convert_score[i] = input_score(score[i]);
        calculate_score[i] = cal_grade(convert_score[i]);
        cout << " [" << i << "] Your Grade is : " << show_score_for_student(calculate_score[i]) << endl;
    }

    return 0;
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

    if (my_score >= 60 && my_score <= 79) {
        _grade = "B";
    }

    if (my_score >= 50 && my_score <= 69) {
        _grade = "C";
    }

    if (my_score <= 49) {
        _grade = "F";
    }

    if (_grade == ""){
        _grade = "ERROR";
    }


    return _grade;
}

/**
 @param _input_score this is the score from input RQ:input
*/

float input_score(int _input_score)
{
    float _convert_score = _input_score;
    return _convert_score;
}

/**
 @param _grade this is the score from input RQ:input
*/
string show_score_for_student(string _grade)
{
    string _print_score = _grade;
    return _print_score;
}