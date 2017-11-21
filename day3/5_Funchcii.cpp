//Znaiti znachenna virazy y = pow((a+b), v) + pow((c+d),v) / pow((c+a), v) + pow((b+d),v);

#include <iostream>
#include <cmath>

using namespace std;


main(){
       double y;
       double v=5;
       double a = 3,b = 7, c = 9, d = 2;
       y = pow((a+b), v) + pow((c+d),v) / pow((c+a), v) + pow((b+d),v);
       cout << y << endl;
       system("pause");
       return 0;
       }
 





































