#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i,j,k,x,sonuc;
int nilpotent(int B[10][10],int boyut){
sonuc=0;
    for(int a=0;a<boyut;a++){
        for(int b=0;b<boyut;b++){
            if(B[a][b]==0){
              sonuc=1;}

}}
return sonuc;
}



int main()
{   int boyut;
       srand(time(NULL));

        printf("Matrisin boyutunu giriniz\n");
        scanf("%d",&boyut);
        int A[boyut][boyut];
        int B[boyut][boyut];
        for(int i=0; i<boyut; i++)
                for(int j=0; j<boyut; j++){
                      A[i][j]=rand()%11;

                }
        printf("Olusturulan matris:\n");
             for(int i=0; i<boyut; i++){
                for(int j=0; j<boyut; j++){

                        printf("%d ", A[i][j]);
                }
                printf("\n");
        }

        for(i=0; i<boyut; i++)
    {
        for(j=0; j<boyut; j++)
        {
            x = 0;

            for(i=0; i<boyut; i++)
            {
                x += A[i][k] * B[k][j];
            }

            B[i][j] = x;
        }
    }
        int sonuc;
        sonuc=nilpotent(B,boyut);
        if(sonuc==1){
        printf("Matris nilpotent dir");

        }
        else
        printf("matris nilpotent DEGILDIR");


        }



