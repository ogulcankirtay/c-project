#include <stdio.h>
int main(){
int a[4]={1,2,3,4};
int gecici,s=2;
int i=0;
for(i=0;i<s;i++){
gecici=a[4-i-1];
a[4-i-1]=a[i];
a[i]=gecici;

}
for(i=0;i<4;i++){
    printf("%d",a[i]);
}

}
