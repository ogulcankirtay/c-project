#include <stdio.h>
#include <stdlib.h>
/*int ikiliarama(int dizi[],int uzunluk,int aranan){
int ust,orta,alt;
ust=uzunluk-1;
alt=0;
orta=0;
while(alt<=ust){
    orta=(alt+ust)/2;
    if(aranan==dizi[orta]){
    return orta;
    }
    else if(dizi[orta]>aranan){ust=orta-1;}
    else alt=orta+1;
}
return 0;
}
int main()
{
int aranan;
printf("aramak istediginiz ssayiyi giriniz: ");
scanf("%d",&aranan);
int dizi[10]={1,2,3,4,5,6,7,8,9,10};
int uzunluk=10;
int arananindis=ikiliarama(dizi,uzunluk,aranan);
    if(arananindis){
        printf("aranan %d sayisi %d. indiste bulundu",aranan,arananindis);
   } else printf("aradiginiz sayi bulunmamaktadir");

    return 0;
}
*/
int main(){
int dizi[10]={10,9,8,7,6,5,4,3,2,1};
int pass,mov;
int i,tmp;
printf("sirasiz hali = ");
for(i=0;i<10;i++)
{
    printf("%d  ",dizi[i]);
}
for(pass=1;pass<10;pass++){
    for(mov=0;mov<9;mov++){
        if(dizi[mov]>dizi[mov+1]){
            tmp=dizi[mov];
            dizi[mov]=dizi[mov+1];
            dizi[mov+1]=tmp;
        }
    }
}

printf("sirali hali");
for(i=0;i<10;i++){
    printf(" %d  ",dizi[i]);
}

}
