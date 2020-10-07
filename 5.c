#include <stdio.h>
#include <stdlib.h>
struct musteri{
char ad[30];
}
mst[3]={
{"bayram aktop"},{"ahmet baðdat"},{"burak algül"}
};
int main()
{
    int w,durum=1;
    int cevap,m1;
    int km[3]={{11111},{22222},{33333}};
int islem,miktar,bakiye=1000;
printf("giris icin cevaplayiniz 7+4*2-4/2=?");
scanf("%d",&cevap);
int i=0;
if(cevap==13){

do{
printf("\nmusteri no(5): ");
scanf("%d",&m1);
for(int j=0;j <3;j++){
    if(m1==km[j]){
            printf("hosgeldiniz %s\n",mst[j].ad);
    j:
    printf("1-Bakiye sorgulama\n2-Para cekme\n3-Para yatirma\n");
printf("Lutfen isleminizi giriniz: ");
scanf("%d",&islem);
switch(islem){
case 1:
printf("Bakiyeniz %d tl'dir.",bakiye);
printf("baska islem yapmak istiyor musunuz:evet(1)/hayır(2)");
scanf("%d",&w);
if(w==1){
    goto j;
}
break;
case 2:
printf("Miktar giriniz: ");
scanf("%d",&miktar);
bakiye-=miktar;
printf("Bakiyeniz %d tl'dir.",bakiye);
printf("baska islem yapmak istiyor musunuz:evet(1)/hayır(2)");
scanf("%d",&w);
if(w==1){
    goto j;
}
break;
case 3:
printf("1 kendi heabiniza \n2 baska hesaba \nsecim:");
int s;
scanf("%d",&s);
if(s==1){
printf("Miktar giriniz: ");
scanf("%d",&miktar);
bakiye+=miktar;
printf("Bakiyeniz %d tl'dir.",bakiye);
printf("baska islem yapmak istiyor musunuz:evet(1)/hayır(2)");
scanf("%d",&w);
if(w==1){
    goto j;
}}
if(s==2){
        printf("musteri numarasi giriniz:");
int a;
scanf("%d",&a);
for(int y=0;y<3;y++){
for(j=0;j<3;j++){
    if(a==km[j]){printf("Miktar giriniz: ");
scanf("%d",&miktar);
bakiye+=miktar;
printf("Bakiyeniz %d tl'dir.",bakiye);
durum=0;}

}
if(durum==1){printf("yanlis giris yaptiniz: ");}
}
printf("baska islem yapmak istiyor musunuz:evet(1)/hayır(2)");
scanf("%d",&w);
if(w==1){
    goto j;
}
}
break;
default:
printf("Gecersiz bir islem girdiniz!");
break;
}

i++;}
else
   printf("yanlis giris!!\n");


}
}while(i<3);}
else
printf("tekrar deneyiniz");
printf(" Gorusmek dilegiyle...");
}
