#include <stdio.h>
#include <stdlib.h>
// Oðulcan Kýrtay 190202005
void hesapla(int toplam, int *yil, int *ay, int *gun)
{
    *gun = (toplam%365)%30;
    *ay = (toplam%365)/30;
    *yil = (toplam/365);
}
int main()
{
    int yil,ay,gun;
    int toplam;
    printf("isin bitirme suresinin kac gun oldugunu giriniz: ");
    scanf("%d", &toplam);
    hesapla(toplam, &yil, &ay, &gun);
    printf("%d yil %d ay %d gun surer\n",yil,ay,gun);
    return 0;
}
