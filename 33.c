#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
/*char karakter;
printf("bir karakter giriniz: ");
scanf("%c",&karakter);
if(isdigit(karakter))
    printf("rakamdir");
else
printf("rakam degildir");

char karakter;
printf("bir karakter giriniz: ");
scanf("%c",&karakter);
if(ispunct(karakter))
    printf("karakter noktalama isaretidir");
else
    printf("notkalama isareti degildir");

    char karakter;
printf("bir karakter giriniz: ");
scanf("%c",&karakter);
if(isalpha(karakter))
{
if(isupper(karakter)){
printf("kucuk harf karsýlýgý %c",tolower(karakter));
if(islower(karakter)){
    printf("buyuk harf karsýlýgý %c",toupper(karakter));
}

}

char s[50];
int x;
long y;
double z;
printf("sayi girin: ");
gets(s);
x=atoi(s);
y=atol(s);
 z = atof(s);
printf("x %d\n",x);
printf("y %d\n",y);
printf("z %lf\n",z);

*/
char s[30]="200.34 bu kýsým yazýdýr";
int cevrilen,cevrilmeyen;
cevrilen=strtod(s,&cevrilmeyen);
printf("cevrilen %d\n",cevrilen);
printf("cevrilmeyen %s\n",cevrilmeyen);
}
