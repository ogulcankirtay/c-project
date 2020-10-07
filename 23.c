#include <stdio.h>
int main(){
    int satir, boslukSayisi, yildizSayisi, i, j;
printf("bir sayi grinizi:");
scanf("%d",&satir);
 boslukSayisi = 0;
yildizSayisi = satir;
for(i=0; i<satir; i++){
for(j=0; j<yildizSayisi;j++)
{printf("*");}


 if( i < (satir / 2) ){
yildizSayisi-=2;
boslukSayisi++;}
else{
yildizSayisi+=2;
boslukSayisi--;}
printf("\n");
for(j=0; j<boslukSayisi;j++)
printf(" ");
}
    return 0;}
