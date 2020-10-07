#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
// 190202005 Oğulcan Kırtay
int sayi_mi(char deger){
if(deger=='0'){
    return 0;
}else if(deger=='1'){
    return 1;
}else if(deger=='2'){
    return 2;
}else if(deger=='3'){
    return 3;
}else if(deger=='4'){
    return 4;
}else if(deger=='5'){
    return 5;
}else if(deger=='6'){
    return 6;
}else if(deger=='7'){
    return 7;
}else if(deger=='8'){
    return 8;
}else if(deger=='9'){
    return 9;
}else{
    return -1;
}

}
int ulke_say(char *metin){
    int i=0,say=0,tut=0;
    while(metin[i]!='\0'){
        if(sayi_mi(metin[i])!=-1 && tut==0){

             tut=1;
             say++;

        }else{
            tut=0;
        }
        i++;
    }
    return say;
}
int main()
{
    char metin[200];
    printf("Ulke isimlerini ve oranlarini giriniz:\n");
    scanf("%s",metin);

    char ulkeler[ulke_say(metin)][20];
    int oranlar[ulke_say(metin)];

    int i=0,j=0,tut=0,say=0,x;
    while(metin[i]!='\0'){
        if(sayi_mi(metin[i])==-1){
            if(tut==1){
                       printf("\n");
                oranlar[say]=x/10;
                x=0;
                tut=0;
                say++;
            }
                ulkeler[say][j]=metin[i];
                j++;

        }else if(sayi_mi(metin[i])!=-1){

            if(tut==0){
                ulkeler[say][j]='\0';
                j=0;
                x=0;
                tut=1;
            }
            x+=sayi_mi(metin[i]);
            x*=10;
        }


        i++;
        if(metin[i]=='\0'){
        oranlar[say]=x/10;
        }
    }

    for(int i=0;i<ulke_say(metin);i++){
        for(j=0;j<ulke_say(metin);j++){
            if(oranlar[j]<oranlar[j+1]){

                int tmp=oranlar[j];
                oranlar[j]=oranlar[j+1];
                oranlar[j+1]=tmp;
                char cmp[20];
                strcpy(cmp,ulkeler[j]);
                strcpy(ulkeler[j],ulkeler[j+1]);
                strcpy(ulkeler[j+1],cmp);

            }else if(oranlar[j]==oranlar[j+1]){
                if(strcmp(ulkeler[j],ulkeler[j+1])==1){
                  int tmp=oranlar[j];
                oranlar[j]=oranlar[j+1];
                oranlar[j+1]=tmp;
                char cmp[20];
                strcpy(cmp,ulkeler[j]);
                strcpy(ulkeler[j],ulkeler[j+1]);
                strcpy(ulkeler[j+1],cmp);
                }
            }
        }
    }
     for(int i=1;i<=ulke_say(metin);i++){
        printf("%s  %d \n",ulkeler[i],oranlar[i]);
     }
    return 0;
}
