#include <iostream>
 
using namespace std; 
 
void f() {
    int n;
    cin >> n;
    if (n != 0) {
        f();
        cout << ' ' << n;
    }
}
 
int main() {
    f();
    cout << '\n';
    system("pause");
}
