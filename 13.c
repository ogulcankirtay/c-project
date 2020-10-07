#include <stdio.h>
 int obeb(int x, int y);
 int sayi_oku();
int main() {
int i,n;
int obeb_s;
printf("kac sayi gireceksiniz: ");
scanf("%d",&n);
obeb_s=sayi_oku();
printf("yeni ebob %d\n",obeb_s);
for(i=2;i<=n;i++){
int sayi=sayi_oku();
obeb_s=obeb(sayi,obeb_s);
printf("yeni ebob %d",obeb_s);
}
}
int sayi_oku(){
    int x;
printf("sayi giriniz: ");
scanf("%d",&x);
return x;

}
int obeb(int x, int y);
{
    int i;
    int sonuc=1;
    for(i=2;i<=x && i<=y; i++){
    if(x%i==0&&y%i==0){sonuc=i;}
    }
return sonuc;
}
