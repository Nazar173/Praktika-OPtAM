
//Otrimat perhe natyralne chislo dla yakogo kognii iz simvolov spivpadae z bykvou

#include <iostream>
#include <cmath>
 
int main()
{
    std::cout<<"Vvedite chislo(int)"<<std::endl;
    unsigned int n;
    std::cin >> n;
    std::cout <<static_cast<int>(sqrt(n))+1 <<std::endl;
    system("pause");
    return 0;
}
