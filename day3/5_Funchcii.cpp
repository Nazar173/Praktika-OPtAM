//Znaiti znachenna virazy y = ((a+b*b*b*b*b)+(c+d*d*d*d*d))/((c+a*a*a*a*a*a)*(b+d*d*d*d*d));

#include <iostream>
#include <math.h>

using namespace std;
float func(float a ,float b,float c, float d){
float y = ((a+b*b*b*b*b)+(c+d*d*d*d*d))/((c+a*a*a*a*a*a)*(b+d*d*d*d*d));
return y;
}
main(){
       float a,b,c,d;
cout<<"Write num a,b,c,d: ";
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cout<<func(a, b, c, d)<<endl;
system ("pause");
return 0;
}








































