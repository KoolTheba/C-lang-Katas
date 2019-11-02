/* Description: request weight and height, perform the BMI formula 
*  and display category as defined
*
*  Author: T.G.
*/

#include<stdio.h>

int main(void){
  
  float weight, height, bmi;

  printf("\nEnter your weight in Kgs: ");
  scanf("%f", &weight);
  printf("\nNow enter your height in mts(e.g. 1.78): ");
  scanf("%f", &height);

  bmi = weight/(height*height);

  if(bmi < 18.5) {
    	printf("\nYour category is Underweight as your BMI is %.2f", bmi);
 } else if(bmi >= 18.5 && bmi < 25) {
   	 printf("\nYou have a Normal weight as your BMI is %.2f", bmi);
 } else if(bmi >= 25 && bmi < 30) {
   	printf("\nYour category is Overweight as your BMI is %.2f", bmi);
 } else {
   	printf("\nWatch out!! Your category is Obese as your BMI is %.2f", bmi);
 }
 return 0;
}
