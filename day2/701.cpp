//Zadana kvadratna matricxa À poradka n ³ vektor b c n elementami.Otrimati vektor 1)Ab
//2)A*Ab
//3)(A-E)b




#include <iostream>
#include <cstdlib>
#include<time.h>
#include <iomanip>
using namespace std;
const int N =3;
const int M =3;
int main()
{int a[N][N];
int b[N];
int e[N][N];
int ab[N][N];
int aab[N][N];
int abb[N][N];
srand( time(0) );
  for (int i = 0; i < N; i++) 
  for (int j = 0; j < N; j++){a[i][j]=rand()%10;}//zadali a
  for (int i = 0; i < N; i++) {b[i]=rand()%10;}//zadali b
    	
    for (int i=0; i<N; i++)
    for (int j=0; j<N; j++){//zadali e
            if (i==j) 
            {e[i][j]=1;}               
            else 
            {e[i][j]=0;}
        }
        
 

for (int i = 0; i < N; i++) 
for (int j = 0; j < N; j++){
       ab[i][j]=a[i][j]*b[i];
    }
for (int i = 0; i < N; i++) 
for (int j = 0; j < N; j++){
       aab[i][j]=a[i][j] * a[i][j]*b[i];
    }
    for (int i = 0; i < N; i++) 
for (int j = 0; j < N; j++){
       abb[i][j]=(a[i][j] - b[i])*b[i];
    }
    
cout<<"a*b"<<endl;
for (int i = 0; i < N; i++) 
for (int j = 0; j < N; j++){
  cout<<"["<<i<<"]"<<"["<<j<<"]"<<ab[i][j]<<endl;
    }
    cout<<"a*a*b"<<endl;
for (int i = 0; i < N; i++) 
for (int j = 0; j < N; j++){
  cout<<"["<<i<<"]"<<"["<<j<<"]"<<aab[i][j]<<endl;
    }
    cout<<"(a*b)*e"<<endl;
for (int i = 0; i < N; i++) 
for (int j = 0; j < N; j++){
  cout<<"["<<i<<"]"<<"["<<j<<"]"<<abb      [i][j]<<endl;
    }

    system("pause");
    return 0;
}
