#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*   int a = 50; float b = 99.9558; char c[] = "deneme";
    printf("%10d\n", a);
    printf("%10f\n", b);
    printf("%10s\n", c);


    int a = 50;
    int b = 150;
    printf("%06d\n", a);
    printf("%06d\n", b);

  float b = 99.9558;
// virgulden sonraki basamak sayisi
printf("%.4f\n", b);
printf("%.2f\n", b);
printf("%10.3f\n", b);

char c[] = "deneme";

printf("0:%s:\n", c);
// Normal
printf("1:%10s:\n", c);
// 10 karakterlik alan saga dayali
printf("2:%.3s:\n", c);
// ilk 3 karakter
printf("3:%-10s:\n", c);
// 10 karakterlik alan sola dayali
printf("4:%10.3s:\n", c);
// 10 karakterlik alan ilk 3 karakter
printf("5:%.3s:\n", c+2);
// [2,5] arasi karakteri yazdir

int a=50;
float b=95.9558;
char s1[30];
sprintf(s1,"sprint ornek: %d %.2f",a,b);
printf("%s",s1);

char s2[]="aaab 10 7.5";
printf("%s\n",s2);
char x[20];
int y;
float z;
sscanf(s2,"%s %d %f",x,&y,&z);
printf("x: %s\n",x);
printf("y: %d\n",y);
printf("z: %f\n",z);

    char basharf;
    char ad[10];
    char soyad[10];
    char ad_soyad[10];
    printf("Ad Soyad: ");
    fgets(ad_soyad, 13, stdin);
    while(getchar() != '\n'); //enter'a gelene kadar oku, ve islem yapmadan karakteri atla
    printf("Ad: ");
    scanf("%9s", ad);
    // max 9 harfli kelime oku
    while(getchar() != '\n');
        // enter'a gelene kadar oku, ve islem yapmadan karakteri atla
       printf("Soyad: ");
    scanf("%9s", soyad);
    // max 9 harfli kelime oku
    while(getchar() != '\n'); /// enter’a kadar girilen karakterleri atla
    printf("Ýsminizin Baþ Harfi: ");
    scanf("%c", &basharf);
    // harf oku
    while(getchar() != '\n'); /// enter’a kadar girilen karakterleri atla
    printf("\n\n");
    printf("Adýnýz Soyadýnýz : !%s!\n", ad_soyad);
    printf("Adýnýz : !%s!\n", ad);
    printf("Soyadýnýz : !%s!\n", soyad);
    printf("Ýsminizin Baþ Harfi : !%c!\n", basharf);
    return 0;
    */
    int i;
    for(i =0 ; i <32; i++)
    { char a =i;
    // 1. sutundaki karakter
    if(!isprint(a))
        a =' ';
    // ekrana yazdirilabilir karakter degilse bosluk ata
    char b =i+32;
    // 2. sutundaki karakter
    if(!isprint(b)) b =' ';
    char c =i+64;
    // 3. sutundaki karakter
    if(!isprint(c))
        c =' ';
    char d =i+96;
    // 4. sutundaki karakter
    if(!isprint(d))
        d =' ';
    printf("|  %-3c %-4d|  %-3c %-4d|  %-3c %-4d|  %-3c %-4d|\n", a, i, b, i+32, c, i+64, d, i+96); }


}
