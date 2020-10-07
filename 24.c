#include <stdio.h>
#include <stdlib.h>
// Oðulcan Kýrtay 190202005
struct kimlik
{
    char ad[20];
    int gun;
    int ay;
    int yil;
};

int kucuguBul(struct kimlik kisi[],int a)
{
    int i;
    int enkucuk=0;
    for(i=1; i<a; i++)
{
if(kisi[i].yil>kisi[enkucuk].yil)
{
enkucuk=i;
}
else if(kisi[i].yil==kisi[enkucuk].yil)
{
if(kisi[i].ay>kisi[enkucuk].ay)
{
enkucuk=i;
}
else if(kisi[i].ay==kisi[enkucuk].ay)
{
if(kisi[i].gun>kisi[enkucuk].gun)
{
enkucuk=i;
}
}
}
}
    return enkucuk;
}

int main()
{
    printf("Kisi sayisini giriniz: ");
    int a;
    scanf("%d",&a);
    struct kimlik kisiler[a];
    int i;
    for(i=0; i<a; i++)
    {
        printf("%d. kisinin ismini giriniz: ",i+1);
        scanf("%s",kisiler[i].ad);
        printf("%d. kisinin dogum tarihini giriniz:\nGun: ",i+1);
        scanf("%d",&kisiler[i].gun);
        printf("Ay: ");
        scanf("%d",&kisiler[i].ay);
        printf("Yil: ");
        scanf("%d",&kisiler[i].yil);
        printf("\n");
    }
    printf("Kisi Bilgileri\n");
     printf("-------------------------------\n");

    for(i=0; i<a; i++)
    {
        printf("%s - %d / %d / %d\n",kisiler[i].ad,kisiler[i].gun,kisiler[i].ay,kisiler[i].yil);
    }
     printf("-------------------------------\n\n");

    int enkucuk = kucuguBul(kisiler,a);
    printf("En Kucuk Kisinin ismi: %s\n\n",kisiler[enkucuk].ad);
    printf("En Kucuk Kisinin Dogum Tarihi: %d / %d / %d",kisiler[enkucuk].gun,kisiler[enkucuk].ay,kisiler[enkucuk].yil);
    return 0;
}
