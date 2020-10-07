#include <stdio.h>
 #include <string.h>
 int main() {

char s1[100] = "aa bbb cc";
char s2[100];

strcpy(s1, "test 1 ");
strcpy(s2, "deneme 2 ");
strcpy(s1+strlen(s1), s2);

printf("strcpy(s1+strlen(s1), s2) sonrasinda\n");
printf("s1: %s\n", s1);
printf("s2: %s\n", s2);

return 0;
}
