#include<stdio.h>
int main(void){
 float n1;
 float result;

 printf("\nIntroduce un número ");
 scanf("%f", &n1);
 
 if(n1 <= 3) {
  result = (n1 * n1);	
 } else {
   result = (2*n1)/3;
 }
  printf("\nEl resultado de la función es: %.2d", result);

 return 0;
}
