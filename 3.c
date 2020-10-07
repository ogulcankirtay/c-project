#include <stdio.h>
int main(){
int a=1,*ap;
float b=3.1,*bp;
double c=3.123,*cp;
char d='a',*dp;
int dizi[5]={1,2,3,4,5};
int *dizip;
ap=&a;
bp=&b;
cp=&c;
dp=&d;
dizip=&dizi[0];
printf("%p adresindeki anın degeri %d",*ap,ap);

}
