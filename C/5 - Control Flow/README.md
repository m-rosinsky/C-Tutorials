# Control Flow

Control flow is how C makes decisions during execution. The main pieces of control flow covered in this chapter are:

- If / Else if / else statements
- While loops
- For loops
- Switch statements
- Goto blocks

---

### Boolean Logic

At the heart of control flow is evaluation of whether a certain condition is ```true``` or ```false```, and then making decisions based off of the result.

Boolean logic is a fancy overarching term for evaluating whether statements are ```true``` or ```false```.

We can use a set of operators, also referred to as boolean operators that test the relationship between pieces of data. These are boolean operators because the result is always either ```true``` or ```false```.

These operators are:

- ```==```: equals (note this is different from the ```=``` operator, which is assignment)
- ```!=```: not equals
- ```>``` : greater than
- ```>=```: greater than or equal to
- ```<``` : less than
- ```<=```: less than or equal to

C does not natively have a boolean data type, so ```true``` statements will output a ```1``` and ```false``` statements will output a ```0```:

```C
#include <stdio.h>

int main()
{
    int x = 5;
    int y = 2;
    
    printf("%d\n", x == y); // false, 0
    printf("%d\n", x > y);  // true, 1
}
```
```
0
1
```

---

### Combinational Logic

The process of _combining_ multiple boolean statements is referred to as _combinational_ logic.

For example, if we are evaluating different fruits trying to find bananas, the evaluation criteria could be:

- is yellow
- has a brown stem

Both of these statements must be true. So we can use the combinational ```and``` to combine these two boolean statements. A fruit must be yellow _and_ have a brown stem to qualify as a banana. The ```and``` in this case acts as a combinational operator.

C has 2 combinational operators to work with:

- ```&&```: combinational and
- ```||```: combinational or

For example, if we wanted to check if someone's age is within certain bounds, we can use a combinational operator:

```C
#include <stdio.h>

int main()
{
    int age = 24;
    
    printf("%d\n", age >= 18 && age <= 30); // 1 -> true x is within this range
}
```

A combinational ```&&``` is only true if the conditions on _both_ sides are ```true```.

A combinational ```||``` is true if _either_ condition is ```true```.

---

### If Statements

If statements are used to perform certain actions based on a condition. They are structured like so:

```C
if (condition)
{
    // do stuff  
}
```

If the ```condition``` evaluates to ```true```, then the program will execute the code within the ```{``` ```}``` brackets.

Otherwise, it will simply skip over the block, and continue execution after the closing ```}```.

```C
#include <stdio.h>

int main()
{
    int x = 5;
    int y = 2;
    
    if (x > y)
    {
        printf("x is greater than y!\n");
    }
}
```
```
x is greater than y!
```

Since the condition is ```true```, the ```printf``` statement will execute.

_NOTE_: the ```(``` ```)``` that surround the condition in C are _NOT_ optional. The compiler will throw an error if they are missing.

---

### Else Statements

An ```else``` block can be attached to an ```if``` statement. This will be executed if the given condition is _NOT_ true.

The syntax is as follows:

```C
if (condition)
{
    // do stuff when condition is true
}
else
{
    // do stuff when condition is false
}
```

For example, we can print whether someone is old enough to vote or not based on a given age:

```C
#include <stdio.h>

int main()
{
    int age = 16;
    
    if (age >= 18)
    {
        printf("You are old enough to vote\n");
    }
    else
    {
        printf("You are NOT old enough to vote\n");
    }
}
```
```
You are NOT old enough to vote
```

Since the condition evaluates to ```false```, the code within the ```if``` block is skipped, and the code within the ```else``` block is executed instead.

This is the core of decision making in ```C```.

---
