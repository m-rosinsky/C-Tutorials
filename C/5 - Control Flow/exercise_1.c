#include <stdio.h>

/*
This function will countdown from n to 0.
If n is 3, the output should be:
3 2 1 0

If n is negative, it should count up to zero.
If n is -3, the output should be:
-3 -2 -1 0

You should only print a new line character after all printing is done.
*/
void count_to_zero(int n)
{
    // Write code here.
}

// Do not modify code below this point.
int main()
{
    printf("Test case 1:\n");
    printf("Expected output:\n");
    printf("5 4 3 2 1 0\n");
    printf("Your output:\n");
    count_to_zero(5);
  
    printf("Test case 2:\n");
    printf("Expected output:\n");
    printf("-5 -4 -3 -2 -1 0\n");
    printf("Your output:\n");
    count_to_zero(-5);
  
    printf("Test case 3:\n");
    printf("Expected output:\n");
    printf("0\n");
    printf("Your output:\n");
    count_to_zero(0);
}
