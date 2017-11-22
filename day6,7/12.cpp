/* Naiti ploshy figuri ABCD po zadanim storonam AB,AC,DC.*/

#include <iostream>
#include <cmath>
using namespace std;
 

 
 double func_priklad(double x,double b,double c)
{
    return x*x-b*x+c;
}  


int main()
{
     double x;
  cout << "Vvedit x= "<< endl ;
  cin>>x;  
    if (func_priklad( x, 8, 12)!=0)
      {cout << "D= " <<(func_priklad( x, 7, 10)/func_priklad( x, 8, 12)) << endl;}
      else    
      {
              cout <<"Divided by zero"<< endl;}
 system("pause");
    return 0;
}
    
