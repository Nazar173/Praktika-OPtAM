/*Izvesni maksimalni skorosti 5 modeleii avtomobiliv.Vsi znachenna virageni v KM.
Napechatat nazvy modeleii y kotorih max skorost privihaet 180 KM */


#include <iostream>
#include <string.h>

using namespace std;

struct cars {
    int speed;
    char models[5];
} infocars[5];
        
        
 
int main()
{    
int i;
        for(i = 0; i < 5; ++i)
        {                
            cout << "Vvedite nazvanie mashini: "; 
            cin >> infocars[i].models;
            cout << "Vvedite skorost' mashini: ";
            cin >> infocars[i].speed;
        }                       
                                
          for (i = 0; i < 5; ++i)
         {                      
                  if(infocars[i].speed > 180) 
                  {        
                          cout << '\n' << infocars[i].models <<"\t"<< infocars[i].speed << '\n';
                  }       
                }
         system("pause");
        return 0;
        
}
