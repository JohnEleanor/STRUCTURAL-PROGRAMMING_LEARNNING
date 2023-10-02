#include <iostream>
using namespace std;
void CalCircle();
void Pentagon();
float Triangle(float h, float w);
void Cute();
void Box();
int main()
{
    int choice;
    do
    {
        cout << "Program Calculate." << endl;
        cout << "****************************" << endl;
        cout << "1. CalCircle" << endl;
        cout << "2. Pentagon" << endl;
        cout << "3. Cute" << endl;
        cout << "4. Triangle" << endl;
        cout << "5. Box" << endl;
        cout << "0. Exit Program" << endl;
        cin >> choice;
        if (choice == 1)
        {
            CalCircle();
        }
        else if (choice == 2)
        {
            Pentagon();
        }
        else if (choice == 3)
        {
            Cute();
        }
        else if (choice == 4)
        {
            float triangle = 0, h = 0, w = 0;
            cout << "Input Hight : ";
            cin >> h;
            cout << "Input width : ";
            cin >> w;
            cout << endl;
            cout << "Area of Triangle : " << Triangle(h, w) << endl;
        }
        else if (choice == 5)
        {
            Box();
        }
    } while (choice != 0);
    {
        cout << "END";
    }
}
void Box()
{
    float width, longth, hight, box;
    cout << "Input width :";
    cin >> width;
    cout << "Input longth :";
    cin >> longth;
    cout << "Input hight :";
    cin >> hight;
    box = width * longth * hight;
    cout << "Area of Box : " << box << endl;
}
void Cute()
{
    float cute, side = 0;
    cout << "Input side : ";
    cin >> side;
    cute = side * side * side;
    cout << endl;
    cout << "Area of Pentagon : " << cute << endl;
}

void Pentagon()
{
    float pentagon = 0, h = 0, dan = 0;
    cout << "Input side : ";
    cin >> dan;
    pentagon = 1.72 * (dan * dan);
    cout << endl;
    cout << "Area of pentagon : " << pentagon << endl;
}
float Triangle(float h, float w)
{
    float triangle;
    triangle = (1 * h * w) / 2;
    return (triangle);
}

void CalCircle()
{
    float Radius, Area, Circumference;
    cout << "Input radius : ";
    cin >> Radius;
    Area = 3.14f * Radius * Radius;
    Circumference = 2 * 3.14f * Radius;
    ;
    cout << endl;
    cout << "Area of circle : " << Area << endl;
    cout << "Circumference of circle : " << Circumference << endl;
    cout << "Diameter of circle : " << (2 * Radius) << endl;
}
