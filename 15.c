#include <stdio.h>
int esit_mi(double a,double b,double hata_payi){
if((a-b)<hata_payi){
    return 1;
}else {return 2;}

}
int main(){
double x=1.2;
double y=5.3;
double z=y-4.1;
if(esit_mi(x,z,0.0001)==1){
    printf("esit");
}else
printf("esit degil");
}
