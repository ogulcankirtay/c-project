#include <stdio.h>
#include <stdlib.h>
// Oðulcan Kýrtay 190202005
struct kisi1
{
    char ad[25];
    int yas;
};
int main()
{
    printf("Kisi sayisini giriniz: ");
    int n,i,j;
    scanf("%d",&n);
    struct kisi1 *kisi;
    kisi=(struct kisi1*)malloc(sizeof(struct kisi1)*n);
    for(i=0; i<n; i++)
    {
        printf("%d. kisiyi giriniz: ",i+1);
        scanf("%s", &kisi[i].ad);
        printf("%d. kisinin yasini giriniz: ", i+1);
        scanf("%d",&kisi[i].yas);
    }

    for(j=0; j<n; j++)
    {

        for(i=0; i<n; i++)
        {
            if(kisi[i+1].ad[0]<kisi[i].ad[0] &(i+1)!=n)
            {
                struct kisi1 tmp=kisi[i];
                kisi[i] = kisi[i+1];
                kisi[i+1]=tmp;
            }
            else if(kisi[i+1].ad[0]==kisi[i].ad[0] & (i+1) !=n)
            {
                if(kisi[i+1].ad[1]<=kisi[i].ad[1] & (i+1)!=n)
                {
                    struct kisi1 tmp=kisi[i];
                    kisi[i]=kisi[i+1];
                    kisi[i+1]=tmp;
                }
            }
        }
    }
    printf("Ada gore fihrist siralamasi:\n");
    for(i=0; i<n; i++)
    {
        printf("%s %d\n", kisi[i].ad, kisi[i].yas);
    }
    for(j=0; j<n; j++)
    {

        for(i=0; i<n; i++)
        {
            if(kisi[i+1].yas<kisi[i].yas &(i+1)!=n)
            {
            struct kisi1 tmp=kisi[i];
            kisi[i]=kisi[i+1];
        kisi[i+1]=tmp;}
}
}
printf("Yasa gore buyukten kucuge siralamasi: \n");
    for(i=1; i<=n; i++)
    {
        printf("%s %d\n", kisi[n-i].ad, kisi[n-i].yas);
    }

    return 0;
}
