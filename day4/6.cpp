//Naiiti priklad figyri ABCD po zadanim storonam
//AB, AC i DC




#include <iostream>
#include <cmath>
 
double calculate_the_hypotenuse(double x, double y)
{
    return sqrt(x*x + y*y);
}
 
int main()
{
    const double AB = 5;
    const double AC = 6;
    const double CD = 5;
 
    double BC = calculate_the_hypotenuse(AB, AC);
    double BD = calculate_the_hypotenuse(BC, CD);
 
    std::cout << "The perimeter of the figure is: "
              << AB + AC + CD + BD;
 system("pause");
    return 0;
}
