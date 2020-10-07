#include <stdio.h>
#include <stdlib.h>
void degerdegistir(int *a,int*b){
int gecici=*a;
*a=*b;
*b=gecici;
}
int main()
{
int x=10,y=5;
degerdegistir(&x,&y);
printf("x= %d y=%d",x,y);}
