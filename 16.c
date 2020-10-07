#include <stdio.h>
#include <stdlib.h>

int main()
{
/*    char ad[20];
    printf("adinizi giriniz");
    gets(ad);
    printf("Hello %s\n",ad);
    const char *s2 = "deneme3";
    printf("%s\n", s2);
    char s3[]="meraba";
    printf("%s",s3);

    char kelime[20];

    printf("bir kelime girin: ");
    scanf("%s", kelime);

    int i;

// stringin bittigini anlamak icin '\0' karakteri kullaniliyor  // printf %s asagidaki dongu gibi calisiyor
 for (i = 0 ; kelime[i] != '\0' ; i++)
    printf("%c", kelime[i]);

    printf("\n\n");

 char a[20];
 printf("bir kelime girinz: ");
 //scanf("%s",a);  bosþuklarý almaz;
 gets(a);
 int i=0;
 while(a[i]!='\0'){
    i++;
 }printf("kelimeni harf sayisi %d",i);
 for(i-1;i>=0;i--){
    printf("%c",a[i]);

 }
    int a = 10;
    char s[8]; // 7 karakter + 1 sonlandirma karakteri sigabilir
    int b = 20;
    printf("a: %d ve b: %d\n\n", a, b);
    printf("programi 8 veya daha fazla karakter girerek test edin\n");
    printf("kelime girin: ");
    fgets(s, 8, stdin); // gets yerine bu sekilde kullanabiliriz  // scanf ile kelime okumak istersek  // scanf("%7s", s);
    printf("girilen kelime: ");
    puts(s);
    printf("\na: %d ve b: %d\n", a, b);
    return 0;*/
    char cumle[100];
    printf("bir cumle girin: ");
    fgets(cumle, 100, stdin);
    // gets yerine bu sekilde kullanabiliriz
    // gets(cumle);
    printf("cumlenin uzunlugu: %d\n", karakter_sayisi(cumle));
    int yer = ara(cumle, 'a');
    if (yer == -1)
        printf("cumlede a karakteri yok\n");
    else
        printf("cumlede a karakteri %d. indexte var\n", yer);
    return 0;
}
int karakter_sayisi(const char *s)
{
    int i;
    for (i = 0 ; s[i] != '\0' ; i++) {   /* islem yapmadan say */  }
    return i;
}
int ara(const char *s,char c)
{
    int i;
    for (i = 0 ; s[i] != '\0' ; i++)
    {
        if (s[i] == c)
            return i;
    }
    return -1;
}
