//Виконати злиття впорядкованого за зростанням A(m) і невпорядкованого B(n) масивів (n<<m) у впорядкований за неспаданням масив С.

#include <iostream>
#include <cstdlib>
#include <locale>
 
using namespace std;
 
int main()
{
    srand((unsigned)time(NULL));
    const int N = 15;
    int A[N], sum;
    cout << "Ishodnoi masiv:" << endl;
    for (int i = 0; i < N; i++)
    {
        A[i] = rand() % 100;
        cout << A[i] << " ";
    }
    cout << endl;
    sum = 0;
    cout << " masiv posle zameni:" << endl;
    for (int i = 0; i < N; i++)
    {
        
        sum += A[i];
        A[i+1] = sum;
        cout << i + 1 << ": " << A[i] << endl;
    }
    system("pause");
    return 0;
}
