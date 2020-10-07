#include <stdio.h>
#include <stdlib.h>
// Oðulcan KIRTAY 190202005
int main()
{
    int i=0;
   char c[100];
   printf("cumleyi giriniz: ");
   gets(c);
   printf("%c\n",c[0]);
for(i=0;c[i]!='\0';i++){
    if(c[i]==' ')
        printf("%c\n",c[i+1]);
}

    return 0;
}
