#include <stdio.h>
#include <math.h>
int main(void)
{
    double meal_cost,tip,tax;
    int tip_percent;
    int tax_percent;
    int total_cost;
    
    scanf("%lf", &meal_cost);
    scanf("%d", &tip_percent);
    scanf("%d", &tax_percent);

    tip = meal_cost * (double)tip_percent/100;
    tax = meal_cost * (double)tax_percent/100;

    total_cost = (int) round(meal_cost+tip+tax);

    printf("%d", total_cost);
    
    return (0);
    
    
}

/*

Task
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost. Round the result to the nearest integer.

Example



A tip of 15% * 100 = 15, and the taxes are 8% * 100 = 8. Print the value  and return from the function.

Function Description
Complete the solve function in the editor below.

solve has the following parameters:

int meal_cost: the cost of food before tip and tax
int tip_percent: the tip percentage
int tax_percent: the tax percentage
Returns The function returns nothing. Print the calculated value, rounded to the nearest integer.

Note: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result.

Input Format

There are  lines of numeric input:
The first line has a double,  (the cost of the meal before tax and tip).
The second line has an integer,  (the percentage of  being added as tip).
The third line has an integer,  (the percentage of  being added as tax).

Sample Input

12.00
20
8
Sample Output

15

*/

