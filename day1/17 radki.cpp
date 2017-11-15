#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
 
const int n=2;//переделать под 10 студентов потом
 
struct student
{
char name[30];//имя
char group[10];//группа
int mark[5];//оценка
};
 
int  main()
{
setlocale(0,"Rus");
int i;
student laba[n]; 

 
for(i=0;i<n;i++)//заполнение структуры
{
cout<<"Вводим данные о студенте № "<<i+1<<endl;
cout<<"Имя:\t";
cin>>laba[i].name;
cout<<"Группа:\t";
cin>>laba[i].group;
cout<<"Оценки(5шт.):\n";
cin  >> laba[i].mark[0] >> laba[i].mark[1] 
     >> laba[i].mark[2] >> laba[i].mark[3] >> laba[i].mark[4];
OemToChar(laba[i].name,laba[i].name);
OemToChar(laba[i].group,laba[i].group);
}   
 
//вывод нач. данных
cout<<"\n\nВаши введенные данные :\n"
    <<"Номер"<<setw(7)<<"Имя"<<setw(22)<<"Группа"<<setw(22)<<"Оценки"
    <<"\n_____________________________________________________________________________\n";
for(i=0;i<n;i++)
cout<<i+1<<setw(15)<<laba[i].name<<setw(20)<<laba[i].group
    <<setw(20)<<laba[i].mark[0]<<setw(3)<<laba[i].mark[1]<<setw(3)<<laba[i].mark[2]
    <<setw(3)<<laba[i].mark[3]<<setw(3)<<laba[i].mark[4]<<endl;
 
//тут будут записи, упорядоченные по алфавиту
 
 
//студенты с "2"
int flag=0;//для проверки кол-ва студентов с "2"
cout<<"\n\n\nСтуденты, имеющие оценку '2'\n";
for(i=0;i<n;i++)
    if(laba[i].mark[0]==2 || laba[i].mark[1]==2 ||  laba[i].mark[2]==2
      || laba[i].mark[3]==2 || laba[i].mark[4]==2)
    {
    cout<<i+1<<setw(15)<<laba[i].name<<setw(20)<<laba[i].group
        <<setw(20)<<laba[i].mark[0]<<setw(3)<<laba[i].mark[1]<<setw(3)<<laba[i].mark[2]
        <<setw(3)<<laba[i].mark[3]<<setw(3)<<laba[i].mark[4]<<endl;
    flag++;
    }
if(flag==0)
cout<<"\n\n\nСтудентов, имеющих оценку '2' нет."<<endl;
return 0;
}
