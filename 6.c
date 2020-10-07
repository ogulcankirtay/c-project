#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int a;
    int b[3]={{12345},{12346},{12347}};
    char t[3];
    t[0]="ali";
 t[1]="veli";
 t[2]="bayram";
    int d;
while(i<3){
    i++;
    printf(" 7+4*2-4/2=? ");
    scanf("%d",&a);
    if(a==7){
    printf("bes haneli müsteri no giriniz: ");
    scanf("%d",d);
    for(i=0;i<3;i++){
        if(d==b[i]){
            printf("Sayin %s",t[i]);
        }
        else printf("yeniden deneyiniz:");
    }
}
else{
    printf("yeniden deneyiniz: ");
}
}
    return 0;
}
