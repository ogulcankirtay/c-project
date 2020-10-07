#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
int main()
{ int i;
char name[N]={};
char name2[N];
printf("kac kelime grieceksiniz: ");
int n;
scanf("%d",&n);
for(i=0;i<=n;i++){
    gets(name2);
    strcat(name,name2);
}
puts(name);

}
