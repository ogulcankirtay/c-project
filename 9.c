#include <stdio.h>
#include <stdlib.h>

int main()
{
int dizi[5]={1,2,3,4,5};
int i,aranacak,yok=1;
printf("aramak istediginiz sayiyi giriniz: ");
scanf("%d",&aranacak);
for(i=0;i<5;i++){
    if(aranacak==dizi[i])
    {
        printf("dizinin %d. indisine esittir",i);
        yok=0;
    }

}
if(yok==1){
    printf("boyle bir elaman yok ");
}
    return 0;
}
