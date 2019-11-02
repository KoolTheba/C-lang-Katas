# Unit 2 - Conditional statements: `if` and `switch`

## Program 1 - Solving a second order equation
Write a program to request the values of coefficients a, b and c for the equation `ax2 + bx + c = 0`. and displays the roots of that equation. The program must consider the following possible cases:

- The user entered `a=0`, `b=0` 
- Linearcase: (`a=0`)
- One double root (`b2-4ac = 0`)
- Tworoots (`b2-4ac > 0`)
- Complex roots (`b2-4ac < 0`)

**[Solution](2_1_orderEquation.c)**

## Program 2 - Body mass index
The Body Mass Index (BMI) of that person is measure that correlates mass and height of a person. It was defined by the Belgian statistician L. A. J. Quetelet and such measure is also known as the Quételet index.

The mathematical expression to compute BMI in the International System of Units of measurement is: 

`BMI = weight (kg) / (height)2 (m)`

According to the World Health Organization different categories [are define](http://en.wikipedia.org/wiki/Body_mass_index).

| Category    | BMI range – kg/m2 |
| ----------- | ----------- |
| Underweight | less than 18.5 |
| Normal | from 18.5 to 25 |
| Overweight | from 25 to 30 |
| Obese | over 30 |

Write a program that:
- Requests the weight in kg and the height in m.
- Compute the BMI by using the former equation.
- Display the category as defined by the BMI.

**[Solution](2_2_bodyMassIndex.c)**

## Program 3 - Menu program (switch statement)
Write a program to read two floating-point numbers and display the following menu on the screen:

- Square of the largest number
- Average
- Difference

Display an error message if the option selected by the user is not valid.

**[Solution](2_3_squareMenu.c)**

## Program 4 - Menu program (switch statement)
Write a program to display the following menu on the screen: 

- A – Area of a circle
- B – Perimeter of a square
- C – Perimeter of a triangle

According to the option selected by the user, the program will request the required input values, make the computation and display the result.

Display an error message if the option selected by the user is not valid.

**[Solution](2_4_formsMenu.c)**