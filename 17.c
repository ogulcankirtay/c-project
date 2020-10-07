#include <stdio.h>
#include <stdlib.h>
#define n 3
int main()
{

    int matris[n][n]={{1,2,3},{4,5,6},{7,8,9}};
    int transpoze[n][n];
int i,j,k;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    transpoze[j][i]=matris[i][j];
    }
}
printf("matris\t\ttranspoze");
printf("\n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d",matris[i][j]);
    }
    printf("\t\t");
    for(j=0;j<n;j++){
        printf("%d",transpoze[i][j]);
    }printf("\n");
}
}
