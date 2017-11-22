//Naiiti primer figyri ABCD po zadanim storonam
//AB, AC i DC




#include <iostream>
#include <cmath>
using namespace std;
 
double figura(double x, double y)
{
    return sqrt(x*x + y*y);
}
 
int main()
{
    const double AB = 5;
    const double AC = 6;
    const double CD = 5;
 
    double BC = figura (AB, AC);
    double BD = figura (BC, CD);
 
    cout << "The figura thrikytnik "
              << AB + AC + CD + BD;
 system("pause");
    return 0;
}
