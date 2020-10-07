#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//Oğulcan Kırtay 190202005
int main()
{
char t[100];
char c[100];
char a[100];
int i,d;
for(i=1; i<=100; i++)
{
d=0;
for(int j=1; j<=i; j++)
{
if(i%j==0)
{
d++;
}
}
if(d==2)
{
sprintf(a,"|%3d(asal) | ...^^... | %4d|..>>..| %10.5f|",i,i*i,(float)i*i);
printf("%s\n",a);
}
else
{
if(i%2==1)
{
sprintf(t,"|%3d(tek)  | ...//... | %4d|..>>..| %10.2f|",i,i/2,i/2.0);
printf("%s\n",t);
}
else if(i%2==0)
{
sprintf(c,"|%3d(cift) | ...><... | %4d|..>>..| %10.3f|",i,i*2,i*2.0);
printf("%s\n",c);
}
}
}
return 0;
}
