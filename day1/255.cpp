//Отримати перше натуральне число для якого кожний із символів співпадає з буквою


#include <iostream>
#include <cmath>
 
int main()
{
    std::cout<<"Vvedite chislo(int)"<<std::endl;
    unsigned int n;
    std::cin >> n;
    std::cout <<static_cast<int>(sqrt(n))+1 <<std::endl;// преобразуе в int , дальше по заданию
    system("pause");
    return 0;
}
