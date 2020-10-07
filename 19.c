#include <stdio.h>
#include <stdlib.h>
/*pointer örnek 3
void atamayap_1(int x){
    x=20;
}
void atamayap_2(int *x){
*x=30;
}
int main()
{
int a=5;
printf("anin degeri=%d\n",a);
atamayap_1(a);
printf("a nin degeri %d\n",a);
atamayap_2(&a);
printf("a nin degeri %d\n",a);
    return 0;
}

// örnk5
void takas_1(int x,int y){
    int tmp;
    tmp=x;
    x=y;
    y=tmp;
}
void takas_2(int *x,int *y){
int *tmp;
tmp=*x;
*x=*y;
*y=tmp;
}
int main(){
int a=1;
int b=2;
printf("a:%d-b:%d\n",a,b);
takas_1(a,b);
printf("a:%d-b:%d\n",a,b);
takas_2(&a,&b);
printf("a:%d-b:%d",a,b);
}

örnek 6:                           0 */
void saat_cevir(int saniye, int *saat,int *dk,int *sn) {
*sn = saniye % 60;
*dk = (saniye / 60) % 60;
*saat = (saniye / 3600); }
int main(){
                        while (1)
{
int saat, dakika, saniye;
int girilen_sayi;
printf("sayi girin: ");
scanf("%d", &girilen_sayi);
saat_cevir(girilen_sayi, &saat, &dakika, &saniye);
printf("%d saat %d dakika %d saniye\n\n", saat, dakika, saniye);  }
  return 0; }
