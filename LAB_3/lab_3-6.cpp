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
using namespace std;

int main() {
    double __km_start,__km_end,__km_total, hour,min,sec, result;
    double _hour_time_total, _min_time_total, _total_time_total;
    double _convert_second_to_hour;

    cout << "ENTER YOUR START KM (KILOMATER): ";
    cin >> __km_start;
    cout << "ENTER YOUR END KM (KILOMATER): ";
    cin >> __km_end;
    __km_total = __km_end - __km_start;
    cout << "THIS IS YOUR KM YOU USED: " << __km_total;


    cout << "\nENTER YOUR TIME (hour, minute, second): ";
    cin >> hour >> min >> sec;


    //? Convert All time to seconcd | เเปลงค่าค่าเวลาทั้งหมดให้เป็นวินาที
    _hour_time_total = 3600 * hour;
    _min_time_total = 60 * min;
    _total_time_total = _hour_time_total + _min_time_total + sec;
    //?


    _convert_second_to_hour = _total_time_total / 3600;
    result = __km_total/_convert_second_to_hour;
    cout << "\nTHIS THIS AVERAGESPEED (km/hr): " << result;
}