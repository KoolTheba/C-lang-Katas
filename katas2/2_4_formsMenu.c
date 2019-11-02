/* Description: display a menu to choose a form(Circle,  Square, Triangle)
*  According to the choice, require input values, compute and
*  display the results
*
*  Author: T.G.
*/

#include<stdio.h>

int main(void){
  
  float radio, circleArea, side, side2, triBase;
  char choice;

  printf("\nChoose an option between C(ircle area), S(quare perimeter), T(riangle perimeter): ");
  do {
    choice = getchar();
  } while(choice!='C' && choice!='S' && choice!='T');

  switch(choice){
   case 'C': printf("\nEnter the circle radio: ");
	     scanf("%f", &radio);
	     printf("\nThe circle area is %.2f", (3.14*radio));
	     break;

   case 'S': printf("\nEnter the square side length: ");
	     scanf("%f", &side);
	     printf("The Square perimeter is %.2f", 4*side);
	     break;

   case 'T': printf("\nEnter the first triangle side length: ");
	     scanf("%f", &side);
	     printf("\nAnd the second side: ");
	     scanf("%f", &side2);
	     printf("\nAnd it base length: ");
	     scanf("%f", &triBase);
	     printf("\nThe Triangle perimeter is %.2f", side+side2+triBase);
	     break;

	default: printf("Error, not valid option");
   }
  return 0;
}

