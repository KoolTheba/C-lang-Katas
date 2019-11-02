/* Description: request the values of the coefficients and 
*  return the root value from a quadratic equation
*
*  Author: T.G.
*/

#include<stdio.h>
#include<math.h>

int main(void){
 double valA, valB, valC, root, discriminant, numerator, denominator, doubleB;

 /* Inicialization */
 discriminant = (4*valA*valC);

 printf("\nEnter a value for coefficient A: ");
 scanf("%lf", &valA);
 printf("\nEnter a value for coefficient B: ");
 scanf("%lf", &valB);
 printf("\nAnd enter a value for coefficient C: ");
 scanf("%lf", &valC);

 doubleB = (valB*valB);
 
if(valA == 0 && valB == 0) {
   root = valC;
   printf("\nRoot = 0");
 } else if(valA == 0) {
    root = (-1) * (valC/valB);
    printf("\nLinear case -> %f", root);
 } else if(doubleB == discriminant) {
    numerator = (-1 * valB + sqrt(doubleB - 4 * valA * valC));
    denominator = 2 * valA;
    root = numerator / denominator;
    printf("\nOne double root -> %f", root);
 } else if(doubleB > discriminant) {
    numerator = (-1 * valB + sqrt(doubleB - 4 * valA * valC));
    denominator = 2 * valA;
    root = numerator / denominator;
    printf("\nTwo roots -> %f", root);
    numerator = (-1 * valB - sqrt(doubleB - 4 * valA * valC));
    root = numerator / denominator;
    printf("\t%f", root);
 } else if(doubleB < discriminant) {

    printf("\nRoot value is complex");
 }
 return 0;
}
