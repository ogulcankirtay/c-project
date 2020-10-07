#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    for(i=0;i<21;i++){
        printf("%d. ogrencini notunu giriniz: ",i+1);
        scanf("%d",&j);
        if(j<=100 & j>=90)
           {
             printf(" %d AA\n",j);
           }
    else  if(j<90 & j>=80)
            {printf("%d BA\n",j);}
             else  if(j<80 & j>=70)
           {
              printf("%d BB\n",j);
           }
              else  if(j<70 & j>=65)
           {
             printf("%d CB\n",j);
           }
              else  if(j<65 & j>=60)
           {
             printf("%d CC\n",j);
           }
            else  if(j<60 & j>=50)
           {
                printf("%d DD\n",j);
           }
            else  if(j<50 & j>=30)

          {
           printf("%d FD\n",j);
          }  else  if(j<30 & j>=0)
           {
               printf("%d FF\n",j);
           } }

    return 0;
}
