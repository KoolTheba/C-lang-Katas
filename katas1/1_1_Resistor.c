#include<stdio.h>
int main(void){
 float r1;
 float r2;
 float req_series;
 float req_par;
 
 printf("\nAmable persone, introduzca un numere #1 ");
 scanf("%f", &r1);
 printf("\nAmable persone, introduzca un numere #2 ");
 scanf("%f", &r2);
 req_series = r1 + r2;
 req_par = (r1 * r2) / req_series;
 printf("\nResistencias en serie: %.2f", req_series);
 printf("\nResistencias en paralelo: %.2f", req_par);
 return 0;
}
