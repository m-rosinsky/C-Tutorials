#include <stdio.h>

/*
This function should print out the integer pointed
to by ptr.

If the pointer is null, the program should
print "NULL"
*/
void show_int(int * ptr)
{
    // Write code here.
}

// Do not modify code below here.
int main()
{
    printf("Test case 1:\n");
    printf("Expected output:\n");
    printf("5\n");
    printf("Your output:\n");
    int x = 5;
    show_int(&x);
  
    printf("Test case 2:\n");
    printf("Expected output:\n");
    printf("NULL\n");
    printf("Your output:\n");
    show_int(NULL);
}
