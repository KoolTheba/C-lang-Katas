#include<stdio.h>
int main(void){
 float b1;
 float B2;
 float a1;
 float area;

 printf("\n¿Cuánto mide el lado b? ");
 scanf("%f", &b1);
 printf("\n¿Cuánto mide el lado B? ");
 scanf("%f", &B2);
 printf("\n¿Cuánto mide la altura? ");
 scanf("%f", &a1);
 area = ((B2 + b1) * a1)/2;
 
 printf("\nEl area del trapecio es: %.2f", area);

 return 0;
}
