/* Naiti ploshy figuri ABCD po zadanim storonam AB,AC,DC.*/

#include <iostream>
#include <cmath>
using namespace std;
 

 
 double func_priklad(double x, double y)
{
    return pow(((x+1/x-1)),x)+18*x*y*y;
}  


int main()
{
     double x,y ;
  cout << "Vvedit x= "<< endl ;
  cin>>x;  
    cout << "Vvedit y= " << endl ;
    cin>>y; 
      cout << "D= " <<func_priklad( x,  y) << endl;    
 system("pause");
    return 0;
}
    
