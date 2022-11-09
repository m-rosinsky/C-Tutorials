# Comments in C

Comments are a way to document, or create notes within our code.

They are completely ignored by the actual compiler, and have no effect on program exectuion.

Comments are often used to leave notes for ourselves or other developers, providing explanation for pieces of code.

---

### Single Line Comments

Single line comments are denoted by the ```//``` in C.

Anything following the ```//``` symbol on the same line will be ignored by the compiler:

```C
#include <stdio.h>

int main()
{
    // print to the console!
    printf("Hello, World!");
}
```

---

### In line comments

Comments can also be placed on the same line as working code. Only the code _following_ the ```//``` will be ignored. Anything before it on the same line will still be compiled:

```C
#include <stdio.h>

int main()
{
    printf("Hello, World!"); // print to the console!
}
```

---

### Multi Line Comments

Comments can also span multiple lines, using the ```/*``` symbol to open the comment, and the ```*/``` symbol to close the comment.

Anything between these symbols will be ignored by the compiler.

```C
#include <stdio.h>

/*
This function is our main function of our program.
It prints hello world to the console!
*/
int main()
{
    printf("Hello, World!");
}
```

---

### Commenting Out Code

Commenting also takes on another function, in that it can be used to "comment out" pieces of code.

If a piece of code is giving you issues, but you don't necessarily want to delete it, we can simply comment it out, and then uncomment it whenever we want to use it again.

```C
#include <stdio.h>

int main()
{
    // printf("line 1");
    printf("line 2");
}
```

---
