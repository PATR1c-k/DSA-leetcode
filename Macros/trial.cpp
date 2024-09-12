#include <iostream>
using namespace std;

#define PI 3.14531;

int score = 15; // very bad practice //becoz any fuction can change it

int demo(int n)
{
    n++;
    cout << "Value of score in demo function is" << score << endl;
}

int main(int argc, char const *argv[])
{
    cout << "Lecture on MAcros" << endl;

    // int r = 5;

    // double area = PI * r * r;
    // cout << "Area of the circle is:" << area << endl;
    cout << "Score value in main function block is " << score << endl;

    demo(15);
    return 0;
}
