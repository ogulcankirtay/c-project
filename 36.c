#include <stdio.h>
int main(){
int i,j,satir,yildiz,bosluk;
printf("bir sayi giriniz:  ");
scanf("%d",&satir);
yildiz=satir;
bosluk=0;
for(i=0;i<satir;i++){
    for(j=0;j<yildiz;j++){printf("*");}
    if(i<(satir/2)){
            yildiz=yildiz-2;
    bosluk++;}
    else{
        yildiz+=2;
        bosluk--;
    }
printf("\n");
for(j=0;j<bosluk;j++)
    printf(" ");

}

}
