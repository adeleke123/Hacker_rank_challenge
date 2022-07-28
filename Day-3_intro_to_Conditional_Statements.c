#include <stdio.h>

int main(void)

{
    int N;
    scanf("%d", &N);

    if (N%2==0)
    {
        if (N>=2 && N<=5)
        {
            printf("Not Weird");
        }
        else if (N>=6 && N<=20)
        {
            printf("Weird");
        }
        else
        {
            printf("Not Weird");
        }
    }
        else
        {
            printf("Weird");
        }

        return (0);
}

/*

Task
Given an integer, , perform the following conditional actions:

If  is odd, print Weird
If  is even and in the inclusive range of  to , print Not Weird
If  is even and in the inclusive range of  to , print Weird
If  is even and greater than , print Not Weird
Complete the stub code provided in your editor to print whether or not  is weird.

Input Format

A single line containing a positive integer, .

Constraints

Output Format

Print Weird if the number is weird; otherwise, print Not Weird.

Sample Input 0

3
Sample Output 0

Weird
Sample Input 1

24
Sample Output 1

Not Weird
*/
