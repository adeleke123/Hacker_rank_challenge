#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, i;
    char s[10000];
    scanf("%d", &T);
    for(i=0;i<T;i++)
    {
        scanf("%s", s);
        OddEven(s);
    }
      
    return 0;
}
void OddEven(char s[])
{
    for(int i=0;i<strlen(s);i++)
    {
        if(i%2==0)
        {
          printf("%c", s[i]);  
        }
        
    }
    printf(" ");
    for(int i=0;i<strlen(s);i++)
    {
        if(i%2!=0)
        {
          printf("%c", s[i]);  
        }
        
    }
    printf("\n");

}
/*
Task
Given a string, , of length  that is indexed from  to , print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).

Note:  is considered to be an even index.

Example


Print abc def

Input Format

The first line contains an integer,  (the number of test cases).
Each line  of the  subsequent lines contain a string, .

Constraints

Output Format

For each String  (where ), print 's even-indexed characters, followed by a space, followed by 's odd-indexed characters.

Sample Input

2
Hacker
Rank
Sample Output

Hce akr
Rn ak
Explanation

Test Case 0:






The even indices are , , and , and the odd indices are , , and . We then print a single line of  space-separated strings; the first string contains the ordered characters from 's even indices (), and the second string contains the ordered characters from 's odd indices ().

Test Case 1:




The even indices are  and , and the odd indices are  and . We then print a single line of  space-separated strings; the first string contains the ordered characters from 's even indices (), and the second string contains the ordered characters from 's odd indices ().

Language
C

More
2324252627282930313233343536373839404142
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, i;
…
}

Line: 42 Col: 1

Submit Code

Run Code

Upload Code as File

Test against custom input
*/
