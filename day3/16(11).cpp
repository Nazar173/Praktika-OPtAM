/* Viznachiti znachenna funksii f(x) na promigky [a,b] z krokom h vikoristovyuchi dla obchislenna znachenna funksii pidprogrammy-funksiiu  */

#include <iostream>
#include <cmath>

using namespace std;
const double Pi = 3.14;
int main ()
{
    double a = -2*Pi;
    double b = 2*Pi;
    double h = 0.5;
    
    if (a!= 0 && b!=0)
       {
            for (double x = a; x <= b; x += h)
            cout <<"y = " << exp (x-0.5)/tan(x)-2 <<endl;
       }
       else
          cout <<"Vvedit znachenna" << endl;
          system("pause");
          return 0;
}
