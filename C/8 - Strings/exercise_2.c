#include <stdio.h>
#include <string.h>
// TODO: Add any additional includes needed here.

/*
TODO: Dynamically allocate enough space
to store a copy of s on the heap.

Then copy the contents of s into the new
string and return it.

Don't forget to allocate space for the
null terminator.
*/
char * alloc_string(char * s)
{
    // TODO: Write code here.
}

// Do not modify code below this point.
#define NUM_INPUTS 4
int main()
{
    char* inputs[NUM_INPUTS] = {"hello, world", "", "the quick brown fox jumped over the lazy dog", "a%hs 2h"};

    for (size_t i = 0; i < NUM_INPUTS; i++)
    {
        char * new_s = alloc_string(inputs[i]);
        if (0 == strcmp(new_s, inputs[i]))
        {
            printf("Test Case %lu Passed!\n", i);
        }
        else
        {
            printf("Test Case %lu Failed: (%s)\n", i, inputs[i]);
        }
        free(new_s);
    }
}
