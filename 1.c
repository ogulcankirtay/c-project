#include <stdio.h>
#include <stdlib.h>
//HAFIZA YERLEÞÝMÝ:
int main()
{
int toplam=150;
short int yas=17;
double ortalama=14;
printf("toplam=%d\n",toplam);
printf("toplamin adresi=%d\n",&toplam);
printf("yas=%d\n",yas);
printf("ortalama=%f\n",ortalama);
//ÖRNEK 1: p degeri ile pnin adresi 'adres saklama'
char a='T';
char b='E';
char c='s';
char d='T';
printf("a nin adresi%d\n",&a);
printf("b nin adresi %d\n",&b);
printf("c nin adresi %d\n",&c);
printf("d nin adresi %d\n",&d);
//p degeri ile pnin adresi 'adres saklama'
char *p;
p=&a;
printf("p nin degeri %d\n",p);
printf("*pnin degeri%d\n",*p);
*p='B';
printf("a nin degeri %d\n",a);
printf("*p nin degeri %d\n",*p);
//ÖRNEK 2;
int A=5;
printf("A nin degeri %d\n",A);
printf("A nin adresi %p\n",&A);
printf("A nin onluk tabanda adresi %u",&A);
int *P;
P=&A;
printf("P nin degeri %p\n",P);
printf("*P nin degeri %d\n",*P);
*P=32;
printf("A nin degeri %d\n",A);
    return 0;
}
