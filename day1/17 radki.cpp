//ϳ��� �������� � ��������� ������� ������ ������ � ����� � ���� ��� (�� ����������) ����������� � ������ �� ����� ��� ������

#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
 
const int n=2;//���������� ��� 10 ��������� �����
 
struct student
{
char name[30];//���
char group[10];//������
int mark[5];//������
};
 
int  main()
{
setlocale(LC_ALL,"Rus");
int i;
student laba[n]; 

 
for(i=0;i<n;i++)//���������� ���������
{
cout<<"������ ������ � �������� � "<<i+1<<endl;
cout<<"���:\t";
cin>>laba[i].name;
cout<<"������:\t";
cin>>laba[i].group;
cout<<"������(5��.):\n";
cin  >> laba[i].mark[0] >> laba[i].mark[1] 
     >> laba[i].mark[2] >> laba[i].mark[3] >> laba[i].mark[4];
OemToChar(laba[i].name,laba[i].name);
OemToChar(laba[i].group,laba[i].group);
}   
 
//����� ���. ������
cout<<"\n\n���� ��������� ������ :\n"
    <<"�����"<<setw(7)<<"���"<<setw(22)<<"������"<<setw(22)<<"������"
    <<"\n_____________________________________________________________________________\n";
for(i=0;i<n;i++)
cout<<i+1<<setw(15)<<laba[i].name<<setw(20)<<laba[i].group
    <<setw(20)<<laba[i].mark[0]<<setw(3)<<laba[i].mark[1]<<setw(3)<<laba[i].mark[2]
    <<setw(3)<<laba[i].mark[3]<<setw(3)<<laba[i].mark[4]<<endl;
 
//��� ����� ������, ������������� �� ��������
 
 
//�������� � "2"
int flag=0;//��� �������� ���-�� ��������� � "2"
cout<<"\n\n\n��������, ������� ������ '2'\n";
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
cout<<"\n\n\n���������, ������� ������ '2' ���."<<endl;
return 0;
}
