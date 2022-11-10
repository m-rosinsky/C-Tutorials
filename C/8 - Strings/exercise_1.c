// TODO: Write you includes here

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
int main()
{
    // Test cases.
    char ** inputs = {"hello", "string with spaces", "", "!$!@@!"};
    size_t num_inputs = 4;
  
    for (size_t i = 0; i < num_inputs; i++)
    {
        if (my_strlen(inputs[i]) == strlen(inputs[i]))
        {
            printf("Test Case %i Passed!\n", i);
        }
        else
        {
            printf("Test Case %i Failed! (%s)\n", i, inputs[i]);
        }
    }
}
