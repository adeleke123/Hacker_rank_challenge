#include <stdio.h>
#include <string.h>

int main(void)

{
   char inputString[105]; // declare a variable to hold our input

   scanf("%[^\n]", inputString); // get a line of input from stdin and save it to our variable
  
   printf("Hello, World.\n");  // Your first line of output goes here
  
   printf("%s", inputString);  // Write the second line of output

   return (0);
}
/*
Task
To complete this challenge, you must save a line of input from stdin to a variable, print Hello, World. on a single line, and finally print the value of your variable on a second line.

You've got this!

Note: The instructions are Java-based, but we support submissions in many popular languages. You can switch languages using the drop-down menu above your editor, and the  variable may be written differently depending on the best-practice conventions of your submission language.

Input Format

A single line of text denoting  (the variable whose contents must be printed).

Output Format

Print Hello, World. on the first line, and the contents of  on the second line.

Sample Input

Welcome to 30 Days of Code!
Sample Output

Hello, World.
Welcome to 30 Days of Code!
*/
