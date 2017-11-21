//Dani diisni cxisla a,b. Poltchit u=min(a,b)





#include <iostream>
#include <math.h>

using namespace std;


float  func_min(float x, float y){
       if (x <=y)
       {
              return x;
       }
       else{ 
             return y;
             
       }}
        main(){
               float a,b;
                   cout<< "VVedit a,b"<< endl;
               cin>>a;
                cin>>b;
               cout<<"u=min (a,b)="<<func_min(a,b) << endl;    
               
               
               system("pause");
               
               
               
               }
