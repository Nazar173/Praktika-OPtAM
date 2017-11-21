//Dani diisni cxisla a,b. Poltchit u=min(a,b)





#include <iostream>
#include <math.h>

float  func_min(float x, float y){
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
               std:: cout<<"u=min (a,b)="<<func_min(a,b) <<std:: endl;    
               
               
               system("pause");
               
               
               
               }
