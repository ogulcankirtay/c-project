#include <stdio.h>
#define n 2
int main(){
int i,j;
int a[n][n]={{1,2},{3,4}};
printf("matris\n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d",a[i][j]);
    }printf("\n");}
printf("ters kosegeni=");

for(i=0;i<n;i++){

    printf("%d",a[i][n-i-1]);
}}








