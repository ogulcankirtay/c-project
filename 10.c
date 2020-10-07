#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gecici,i,j;
int no[4]={1,2,3,4};
long vize[4]={99,101,98,97};
for(i=0;i<4;i++){
    printf("%d->%ld ",no[i],vize[i]);
}printf(" \n\n");
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
            if(vize[j]<vize[j+1]){
                gecici=vize[j];
                vize[j]=vize[j+1];
                vize[j+1]=gecici;
                gecici = no[j];
                no[j] = no[j+1];
                no[j+1] = gecici;
            }
    }
printf("%d-->%ld ",no[i],vize[i]);
}
}
