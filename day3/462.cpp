//Sostavit procxedyry rezyltatom roboti kotoroi yavlaetsa istine znacxinna, yakho simvol, zadanii pri obrachennii k procxedyre - bykva, i lognoe znachenna v poganom vipadky.

#include <iostream>
#include <cctype>
using namespace std;

int func(char a, char b){
     if ( a==b ||isalpha(a)==isalpha(b))

{return 1; }
                   
                      
     else{
     return 0;
     } 
     }
 
  main()
  {
          char a,b;
                   cout<< "VVedit a,b"<< endl;
                cin>>a;
                cin>>b;
               cout<<"resulat="<<func(a,b) << endl;    
              
               system("pause");
          
          
          
          
          
          }
