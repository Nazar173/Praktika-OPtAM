/* Naiti pirimiter figuri ABCD po zadanim storonam AB,AC,DC.*/




#include <iostream>
#include <cmath>
using namespace std;
 
double func_Pifagora(double x, double y)
{
    return sqrt(x*x + y*y);
}
 
 double func_Heroin(double x, double y, double h)
 
{double PP, p;
PP=(x+y+h)/2;
    return sqrt(PP*(PP-x)*(PP-y)*(PP-h));;
}  


int main()
{
     double AB,AC,CD,BD ;
  cout << "Vvedit AB= "<< endl ;
  cin>>AB;  
    cout << "Vvedit AC= " << endl ;
    cin>>AC; 
      cout << "Vvedit CD= " << endl;  
      cin>>CD;
        cout << "Vvedit BD= " <<  endl;
        cin>>BD;
 
    cout << "Vaha plosha=" <<func_Heroin(AB,AC,func_Pifagora(AB,AC))+func_Heroin(BD,CD,func_Pifagora(AB,AC))<<endl;
   
 system("pause");
    return 0;
}

