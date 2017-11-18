
//Dano poslidovnist cxlih chisel. Zasyvati cxi mogna rozbiti ii na pari takim cxinom shob dobytok cxisel byd yakoi pari dorivnyvav odnomy i tomy g cxisly 
//a.	dla naturalnih chisel
//b.	dla dovilnih cxilih.



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
