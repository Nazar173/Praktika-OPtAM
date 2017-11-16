//Написати програму яка вираховує кількість букв у реченні



#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define CONSONANTS "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"
using namespace std;
 main()
{
char s[400];
char *buf =" ,.!?";
cout<<"Vvedite rechenna\n";
gets(s);
 
int i,count = 0;
for(i=0;i<strlen(s);i++)
{
if(s[i] != '\0')
{
if(s[i] != *buf)
{
  if( strchr(CONSONANTS, s[i]))      //esli iz deflina to dobavlyayem
count++;
}
}
else break;
}
 
cout<<count;
system("pause");
}
