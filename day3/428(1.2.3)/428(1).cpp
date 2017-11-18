//Dani diisni cxisla a,b. Poltchit u=min(a,b)





#include <iostream>
#include <math.h>
# define M_PI           3.14159265358979323846
float  func_max(float x, float y){
       if (x >=y)
       {
              return x;
       }
       else{ 
             return y;
             
       }}
        main(){
               float a,b;
                  std:: cout<< "VVedit a,b"<<std:: endl;
               std:: cin>>a;
               std:: cin>>b;
               std:: cout<<"u=min (a,b)="<<func_max(a,b) <<std:: endl;    
               
               
               system("pause");
               
               
               
               }
