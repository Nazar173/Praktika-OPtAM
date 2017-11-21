//Sostavit procxedyry rezyltatom roboti kotoroi yavlaetsa istine znacxinna, yakho simvol, zadanii pri obrachennii k procxedyre - bykva, i lognoe znachenna v poganom vipadky.

#include <iostream>
using namespace std;

int func(char a, char b){
     if ( a==b ||isalpha(a)==isalpha(b))

{return 1; }
                   
                      
     else
     return 0;
     } 
     
 
  main()
  {
          char a,b;
                  std:: cout<< "VVedit a,b"<<std:: endl;
               std:: cin>>a;
               std:: cin>>b;
               std:: cout<<"resulat="<<func(a,b) <<std:: endl;    
              
               system("pause");
          
          
          
          
          
          }
