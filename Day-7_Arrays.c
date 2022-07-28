#include <stdio.h>
int main(void)
{
   int n;
   int a[10000];
   int i;
   
   scanf("%d", &n);
   for (i=0; i<n; i++)
   {
       scanf("%d", &a[i]);
   }
   for (i=n-1; i>=0; i--)
   {
       printf("%d ", a[i]);
   }
   return (0);   
}
/*

Task
Given an array, , of  integers, print 's elements in reverse order as a single line of space-separated numbers.

Example


Print 4 3 2 1. Each integer is separated by one space.

Input Format

The first line contains an integer,  (the size of our array).
The second line contains  space-separated integers that describe array 's elements.

Constraints

Constraints

, where  is the  integer in the array.
Output Format

Print the elements of array  in reverse order as a single line of space-separated numbers.

Sample Input

4
1 4 3 2
Sample Output

2 3 4 1
*/
