//13.	Дано послідовність цілих чисел. З'ясувати, чи можна розбити її на пари таким чином, щоб добуток чисел будь-якої пари дорівнював одному й тому ж числу
//a.	для натуральних чисел
//b.	для довільних цілих.



#include <algorithm> 
int main()
{
    int a,n;
    
sort(a, a+n);
bool res=true;
int p=a[0]*a[n-1];
 
for (int i=1; i<n/2 && res; ++i)
res=(a[i]*a[n-i-1]==p);
cout<<(p?"true":"false");
system("pause");
    return 0;
}
