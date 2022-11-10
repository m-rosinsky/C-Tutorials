#include <stdio.h>
#include <string.h>

/*
This function returns the length of a string.
The idea is to write it on your own,
so don't use strlen or any other similar function
*/
size_t my_strlen(char * s)
{
    // TODO: Write code here.
}

// Do not modify any code below this point
#define NUM_INPUTS 4
int main()
{
    // Test cases.
    char* inputs[NUM_INPUTS] = {"hello", "string with spaces", "", "!$!@@!"};
    size_t num_inputs = NUM_INPUTS;

    for (size_t i = 0; i < num_inputs; i++)
    {
        if (my_strlen(inputs[i]) == strlen(inputs[i]))
        {
            printf("Test Case %lu Passed!\n", i);
        }
        else
        {
            printf("Test Case %lu Failed! (%s)\n", i, inputs[i]);
        }
    }
}
