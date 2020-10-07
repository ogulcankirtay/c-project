#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// OÐULCAN KIRTAY 190202005
int i,j,k;
int b(int a[20][20],int boyut){
int toplam,durum;
durum=0;
for(i=0; i<boyut;i++)
    {
for(j=0;j<boyut;j++)
    {
    toplam=0;
    for(k=0; k<boyut;k++)
    {
    toplam+= a[i][k]*a[k][j];
}a[i][j]=toplam;
        }
    }
for(i=0;i<boyut;i++){
    for(j=0;j<boyut;j++){
        if(a[i][j]==0){
              durum=1;}

}}
return durum;
}

int main()
{
    int boyut,durum;
srand(time(NULL));
printf("matrisin boyutunu giriniz! ");
scanf("%d",&boyut);
int a[boyut][boyut];
for(i=0;i<boyut;i++){
    for(j=0;j<boyut;j++){
       a[i][j]=rand()%20-10;
             }
}
for(i=0;i<boyut;i++){
    for(j=0;j<boyut;j++){
        printf(" %d",a[i][j]);
    }
    printf("\n");
}
durum=b(a,boyut);
if(durum==1){
    printf("Matris nilpotenttir");

}
else
        printf("Matris nilpotent Degildir!");


}
