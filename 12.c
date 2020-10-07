#include <stdio.h>
#include <stdlib.h>
int tek(int altlimit, int ustlimit);
int cift1(int altlimit, int ustlimit);
int main()
{ int alt ,ust,tek ,cift;
    printf("alt limit girinizz: ");
     scanf("%d",&alt);
     printf("ust limit giriniz: ");
     scanf("%d",&ust);
     printf("cift sayilar");
     cift=cift1(alt,ust);
     printf("\ntek sayilar sayilar");
     tek=tek1(alt,ust);

}
int cift1(int altlimit, int ustlimit){
if(ustlimit>=altlimit){
if(altlimit%2==0){
        printf(" %d  ",altlimit);
return cift1(altlimit+2,ustlimit);
}
}

}
int tek1(int altlimit, int ustlimit){
if(ustlimit>=altlimit){
if(altlimit%2==1){
        printf(" %d  ",altlimit);
return tek1(altlimit+2,ustlimit);
}
else
    return tek1(altlimit+1,ustlimit);
}

}
