#include<stdio.h>
int main(void){
 float workHours;
 float euroPerHour;
 float grossSalary;
 float totalTaxes;
 float netSalary;

 printf("\nPor favor, introduzca las horas trabajadas ");
 scanf("%f", &workHours);
 printf("\nAhora, ¿cuanto cobra por hora? ");
 scanf("%f", &euroPerHour);
 grossSalary = (workHours * euroPerHour);
 totalTaxes = (grossSalary * 0.15);
 netSalary = grossSalary - totalTaxes;

 printf("\nTu salario bruto es: %.2f", grossSalary);
 printf("\nLas tasas ascienden a: %.2f", totalTaxes);
 printf("\nTu salario neto es: %.2f", netSalary);

 return 0;
}
