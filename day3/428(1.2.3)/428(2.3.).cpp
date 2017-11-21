//Dani diisni chisla a,b.Otrimati  u=min(ab,a+b),min(u+u*u,3.14)


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
                std:: cout<<"u1=min(ab, a+b)"<<func_min(a*b,a+b)<<std:: endl;
               std:: cout<<"u2=min(u+u*u,3.14)"<<func_min(func_min(a,b)+(func_min(a,b)*func_min(a,b)),M_PI)<<std:: endl;
               system("pause");
               
               
               
               }
