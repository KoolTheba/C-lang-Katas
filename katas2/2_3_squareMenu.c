/* Description: read two floating-points numbers and
*  display a menu with options Square, Average, Difference and
*  perform the selected option
*
*  Author: T.G.
*/

#include<stdio.h>

int main(void){
	
  float num1, num2;
  char choice;

  printf("\nChoose an option between S(quare), A(verage), D(ifference): ");
  do {
    choice = getchar();
  } while(choice!='S' && choice!='A' && choice!='D');

  printf("\nEnter a number: ");
  scanf("%f", &num1);
  printf("\nEnter another number: ");
  scanf("%f", &num2);

  switch(choice){
	case 'S': if(num1 > num2){
		     printf("%.2f", num1*num2);	
		   } else {
		     printf("%.2f", num2*num2);	
		   };
		   break;
	
	case 'A': printf("%.2f", (num1+num2)/2);
		  break;

	case 'D': printf("%.2f", num1 - num2);
		  break;

	default: printf("\nError, not valid option");
	 }
  return 0;
}
