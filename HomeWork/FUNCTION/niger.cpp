#include <iostream>
#include <vector>
using namespace std;
int main() {
  // Declare a vector to store the grades.
  vector<int> grades;
  // Input 20 grades from the user.
  for (int i = 0; i < 20; i++) {
    int grade;
    cin >> grade;
    grades.push_back(grade);
  }
  // Calculate the grade for each student.
  for (int i = 0; i < 20; i++) {
    int grade = grades[i];
    if (grade >= 90) {
      cout << "A" << endl;
    } else if (grade >= 80) {
      cout << "B" << endl;
    } else if (grade >= 70) {
      cout << "C" << endl;
    } else if (grade >= 60) {
      cout << "D" << endl;
    } else {
      cout << "F" << endl;
    }
  }
  return 0;
}