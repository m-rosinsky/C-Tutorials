# Print Formatting

In the last reference, we learned about declaring variables, but now we want to actually print them.

For printing different kinds of data in C, we have to learn a technique called _print formatting_.

This is why we use the function ```printf```, which stands for _print format_.

---

### Format specifiers

The first parameter within a call to ```printf``` is always a string in ```"``` quotes. If we want to print out data, we have to mark different places in our string to substitute in our data.

We do this with a _format specifier_.

The format specifier always starts with a ```%``` symbol, and the character that follows determines the type of data being subbed in.

For a complete list of format specifiers in C, check out the table at this link: https://www.tutorialspoint.com/format-specifiers-in-c

For example, we can see that a signed integer (one that can be positive or negative) has the format specifier ```%d```.

So to print an integer, we can insert the ```%d``` symbol as a placeholder for that integer. For example:

```C
#include <stdio.h>

int main()
{
    int x = 5;
    
    printf("x is %d\n", x);
}
```
```
x is 5
```

We can see that we provide ```x``` as the second parameter in the ```printf``` call. ```x``` will then be substituted in place of the ```%d``` symbol in the string. Then a new line is printed in place of the ```\n```.

---

### Multiple Format Specifiers

If we want to print multiple pieces of data in the same ```printf``` call, we can use multiple format specifiers.

For example, if i had a coordinate pair and wanted to print it in the format of (x, y), I could write:

```C
#include <stdio.h>

int main()
{
    int x = 2;
    int y = 6;
    
    printf("(%d, %d)\n", x, y);
}
```
```
(2, 6)
```

When there are multiple format specifiers, the substitution happens in order. Meaning ```x``` will be substituted for the first ```%d```, since ```x``` comes first in the parameter list, and ```y``` will replace the second ```%d```.

---

### Potential Errors.

We must always have a piece of data to replace each format specifier in the ```printf``` call.

If we have a format specifier, but no data to subtitute in, this will throw an error:

```C
#include <stdio.h>

int main()
{
    printf("%d"); // Nothing was supplied to replace the %d.
}
```
```
main.c: In function ‘main’:
main.c:5:14: warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat=]
    5 |     printf("%d");
      |             ~^
      |              |
      |              int
```

Or if we supply too many arguments for the number of format specifiers:

```C
#include <stdio.h>

int main()
{
    int x = 5;
    int y = 10;
    
    printf("%d\n", x, y); // only 1 format specifier, but 2 parameters.
}
```
```
main.c: In function ‘main’:
main.c:8:12: warning: too many arguments for format [-Wformat-extra-args]
    8 |     printf("%d\n", x, y);
      |            ^~~~~~
```

---

### Using the wrong format specifier.

If the format specifier that we provide does not match the piece of data we provide, this will generate a warning, and will lead to the compiler to trying to interpret the piece of data as the format specifier.

For example:
```C
#include <stdio.h>

int main()
{
    char c = 'A';
    
    printf("%d\n", c); // Note we used the int format specifier, instead of the character specifier.
}
```
```
65
```

The program prints out 65, since it interprets ```c``` as an integer, and ```'A'``` has an ASCII value of 65.

---

### Escape Sequences

There are certain characters that we can print out that aren't necessarily on the standard keyboard.

We've already made use of one, the new line character. If we wanted to print a new line, there isn't a key on our keyboard for it, so we use these things called escape sequences.

Escape sequences all start with the ```\``` character, the one above the ```enter``` key.

The character that follows dictates the type of escape sequence. For example, a new line is ```\n```.

The full list of escape sequences can be found here: https://en.wikipedia.org/wiki/Escape_sequences_in_C

---

### Exercises

There are no attached exercise files for this chapter, but try playing around with format specifiers and escape sequences!

---
