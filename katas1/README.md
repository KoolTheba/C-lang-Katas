# Unit 1 - Operators, data types, `printf`/`scanf`

## Program 1 - Resistors
Write a program to calculate the equivalent resistor of two resistors connected in series and in parallel. Given the resistors R1 and R2, the equivalent resistors are calculated as:

- Series: `Req_Series = R1 + R2`
- Parallel: `Req_Paral = (R1 * R2) / (R1 + R2)`

After writing the header, includes and main, write the following variable declaration for the resistors:

```c
float r1; /* Resistor 1, read from the keyboard */ 
float r2; /* Resistor 2, read from the keyboard */ 
float req_series; /* Equivalent series resistor */
float req_par; /* Equivalent parallel resistor */
```

Then, read r1 and r2 from the keyboard, by means of the function `scanf()`

```c
printf(“Introduce resistor 1 => “);
scanf(“%f“, &r1);
printf(“Introduce resistor 2 => “);
scanf(“%f”, &r2);
```

Calculate the equivalent resistors and display the results on the screen:

```c
req_series = r1 + r2;
req_par = (r1 * r2) / req_series;
printf(“The equivalent resistor for the series connection is %f \n”, req_serie);
printf(“The equivalent resistor for the parallel connection is %f \n”, req_par);
```

Both `scanf()` and `printf()` functions use the format specifier `%f` for the float numbers to be read and displayed.

Execute the program typing in the values de `r1 = 2.0` and `r2 = 1.0`. 
Display 2 decimal places of the calculated resistors (using `%.2f`).

**[Solution](1_1_Resistor.c)**

## Program 2 - Net Salary
Write a program to compute the monthly net salary of an employee. 
The gross salary is calculated given the number of work hours and a euro per hour. 
The income tax is 15% of the gross salary.

The program will read the following data from the keyboard:
- Work hours
- Euro per hour

Calculate the gross salary, taxes and the net salary.

**[Solution](1_2_netSalary.c)**

## Program 3 - Trapezium area
The formula to calculate the area of a trapezium is:

`Trapezium area = [(B + b). a] / 2`

Write a program to calculate the area of a trapezium, following the steps:
- Declare variables B, b and a as input, and for the area
- Read from the keyboard the three variables
- Calculate the area
- Display the result on the screen

Write the program in the computer, then compile and execute. Run the program step-by-step using the debugger and check that all three variables change values according to the code.

**[Solution](1_3_Trapezium.c)**

## Program 4 - Basic exercise with if statement
Write a program to calculate the following piecewise defined function:
f(x){
    x2 for x <= 3
    2x/3 for x > 3
}   
The program will read from the keyboard the value for `x` and then calculate the correct value of the function and display it on the screen.

**[Solution](1_4_ifStatement.c)**