
#include <iostream>
using namespace std;

/**
 @param _param_1 this is the score from input RQ:FUNCTION inputscore()
*/

float cal_grade(int _input_score_from_student)
{
    float _grade;
    _grade = _input_score_from_student + 5.123;
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
float show_score_for_student(float _grade)
{
    float _print_score = _grade;
    return _print_score;
}

int main()
{
    int score[20] = {};
    float convert_score[20] = {};
    float calculate_score[20] = {};
    int i = 1;
    while (i <= 20)
    {
        cout << "[" << i << "]"
             << "input score : ";
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