#include <stdio.h>
#include <stdlib.h>
// Oğulcan Kırtay 190202005
int main()
{
char a[10];
int i;
FILE *dosya=fopen("quiz8.txt","w");
printf("Sayi giriniz: ");
fgets(a,10,stdin);
fputs(a,dosya);
if(dosya==NULL){
printf("dosya açilamadi");
}
else{
for(i=0;a[i]!='\0'; i++)
    {
switch(a[i])
{
case '0':
printf("sifir ");
fprintf(dosya,"sifir ");
break;
case '1':
printf("bir ");
fprintf(dosya,"bir ");
break;
case '2':
printf("iki ");
fprintf(dosya,"iki ");
break;
case '3':
printf("uc ");
fprintf(dosya,"uc ");
break;
case '4':
printf("dort ");
fprintf(dosya,"dort ");
break;
case '5':
printf("bes ");
fprintf(dosya,"bes ");
break;
case '6':
printf("alti ");
fprintf(dosya,"alti ");
break;
case '7':
printf("yedi ");
fprintf(dosya,"yedi ");
break;
case '8':
printf("sekiz ");
fprintf(dosya,"sekiz ");
break;
case '9':
printf("dokuz ");
fprintf(dosya,"dokuz ");
break;}}
printf("\nDosyaya kaydedilmistir");
}fclose(dosya);
    return 0;
}
