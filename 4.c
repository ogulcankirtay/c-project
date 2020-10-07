#include <stdio.h>
#include <stdlib.h>
void asal_mi(int a){
int i,durum;
for(i=2;i<a;i++){
        if(a%i==0){durum=1;}
        else durum=2; break;}
 if(durum==1){printf("asal degil");
}
else if(durum==2){printf("asal ");}

}
int main()
{ int a;
printf("bir sayi giriniz: ");
scanf("%d",&a);
asal_mi(a);

}
