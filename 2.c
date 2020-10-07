#include <stdio.h>
#include <stdlib.h>
void ekranayaz(int d[],int n);
void ekranayaz2(int *d,int n);
int main()
{
    //sizeof
    /*short a;
    int b;
    long c;
    float d;
    char e;
    printf("sizof(a):%d\n ",sizeof(a));
    printf("sizeof(b):%d\n",sizeof(b));
    printf("sieof(c):%d\n",sizeof(c));
    printf("sizeof(d): %d\n",sizeof(d));
    printf("sizeof(e):%d\n",sizeof(e));

    int dizi[5];
    int *ptr;
    printf("sizeof(dizi):%d\n",sizeof(dizi));
    printf("sizof(ptr):%d\n",sizeof(ptr));
    return 0;
int a=5;
int *a_ptr=&a;
printf("anin baslangic adresi %u\n\n",a_ptr);

a_ptr++;
printf("1 eklendikten sonra anin adresi %u\n\n",a_ptr);
a_ptr-=2;
printf("2 eksildikten sonra anin adresi %u\n\n",a_ptr);
 a_ptr--;
 printf("1 cikarildiktan sonra adres degeri: %u\n\n", a_ptr);
  printf("a'nin 2 sonraki adresi: %u\n", (&a) +2);
      printf("a'nin 1 onceki adresi: %u\n", (&a) -1);

//iþaretci & dizi
int a[5]={0,1,2,3,4};
int *aptr;
aptr=a;
printf("anin adresi %u\n\n",aptr);
//a nin ikinci elemani
printf("a[2]=%d\n",a[2]);
printf("*aptr+2: %d",*(aptr+2));

printf("aptr[2] %d\n",aptr[2]);
printf("*(a+2): %d\n",*(a+2));
//a nin 2. indeksinin adresi
printf("&a[2] %d\n",&a[2]);
printf("a+2: %d",a+2);

*/
int d[7]={0,1,2,3,4,5,6};
ekranayaz(d,2);
ekranayaz2(&d,2);
ekranayaz(&d[2],3);
    ekranayaz(d+2, 3);
}
void ekranayaz(int d[],int n)
{
for(int i=0;i<n;i++){
    printf("%d",d[i]);
    printf("\n");
}
}
void ekranayaz2(int *d,int n)
{
for(int i=0;i<n;i++){
    printf("%d",d[i]);
    printf("\n");

}
}
