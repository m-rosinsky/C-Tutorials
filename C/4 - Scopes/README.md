# Scoping in C

In C, data we create is tied to a certain lifetime. This means that after the data's lifetime ends, the data is no longer accessible.

The place in code from which the data is _created_ to the place where the data's lifetime _ends_ is referred to as the data's _scope_.

Therefore, when the lifetime of data ends, this is sometimes referred to as the piece of data _going out of scope_.

# What is a Scope in C?

A scope in C is the start and end point of the program where a certain piece of data is accessible. Outside of this scope, the data is _NOT_ accessible.

This is typically indicated by the ```{``` ```}``` symbols that surround an object. For example:

```C
#include <stdio.h>

int main()
{
    int x = 5;
}
```

In this example program, a new scope is opened on the line with the ```{``` character. This scope is later closed with the ```}``` character.

This means that any piece of data that is _created_ within this scope, will be destroyed when the scope closes.

So if we try to reference ```x``` after the ```}``` character, we will get an error:

```C
int main()
{
    int x = 5;
}

// Try to modify x (it has gone out of scope).
x = 6;
```

Running the program yields the compiler warning us:
```
a.c:6:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
x = 6;
^
1 warning generated.
```

Essentially, this is the compiler saying to us that it doesn't recognize ```x``` anymore, and it thinks we're trying to declare a new piece of data ```x``` on line 6. This is because ```x``` went out of scope when the ```}``` ended.

---
