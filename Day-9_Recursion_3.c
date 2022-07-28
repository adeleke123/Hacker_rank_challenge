#include <stdio.h>
int factorial(int n)
{
    if(n==1)
    {
    return 1;
    }
    else
    {
    return n*factorial(n-1);
    }
}
int main(void)
{
    int n, fact;
    scanf("%d", &n);
    fact = factorial(n);
    printf("%d", fact);
}

/*
Function Description
Complete the factorial function in the editor below. Be sure to use recursion.

factorial has the following paramter:

int n: an integer
Returns

int: the factorial of 
Note: If you fail to use recursion or fail to name your recursive function factorial or Factorial, you will get a score of .

Input Format

A single integer,  (the argument to pass to factorial).

Constraints

Your submission must contain a recursive function named factorial.
Sample Input

3
Sample Output

6
*/
