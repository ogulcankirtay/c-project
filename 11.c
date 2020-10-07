#include <stdio.h>
int main(){
int sayilar[4];
int i,n;
do{
    printf("kac sayi giriceksiniz: ");
    scanf("%d",&n);
}while(n>4);
for(i=0;i<n;i++){
    printf("sayiyi girin: ");
    scanf("%d",&sayilar[i]);
}
int en_kucuk=sayilar[0];
for(i=1;i<n;i++)
{
    if(sayilar[i]<en_kucuk)
        en_kucuk=sayilar[i];

}
printf("en kuuck sayilar %d",en_kucuk);
}
