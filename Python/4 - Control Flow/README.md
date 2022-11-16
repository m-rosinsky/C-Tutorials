# Control Flow in Python

Control flow is an overarching term for how we control program execution.

We may want our program to act a certain way under one set of conditions, but do something else under other conditions.

Before we can talk about different control structures in Python, we first have to be introduced to a concept called _boolean logic_.

---

### Boolean Logic

Boolean logic is a fancy term for the study of whether something is ```True``` or ```False```.

Python comes with a number of built-in boolean operators, which are used to determine the relationship between two pieces of data.

These are:

- ```==```: equals (not to be confused with the ```=``` operator, which is assignment)
- ```!=```: not equals
- ```>``` : greater than
- ```>=```: greater than or equal to
- ```<``` : less than
- ```<=```: less than or equal to

Since these are boolean operators, the result will always be either ```True``` or ```False```. For example:

```python3
x = 2

print(x == 4)   # False, x is 2

print(x > 1)    # True, 2 > 1
```

Boolean logic is what drives conditional statements in Python. We can make decisions to execute some code if a condition is ```True```, or execute some different code if the condition is ```False```, and so on.

---

### If Statements

If statements are the most basic form of control flow. They evaluate a boolean condition, and execute a block of code if the condition is ```True```.

The basic syntax is as follows:

```python3
if condition:
    statements
```

The ```:``` symbol will come after a condition.

In Python, indentation is not just for show! The fact that ```statements``` are indented shows that it falls under the ```if``` statement. If it were not indented, the code would not be a part of the ```if``` block.

For example:

```python3
x = 2

if x > 0:
    print("x is positive")
```
```
x is positive
```

Since the condition ```x > 0``` evalutes to ```True```, anything in the code block following the ```:``` will be executed.

To exit the code block, we simply stop indenting:

```python3
x = 5

if x < 10:
    print("x is less than 10")

print("Done executing!")
```
```
x is less than 10
Done executing!
```

Notice that the second ```print``` statement is _NOT_ indented! This means that it is not part of the ```if``` block, and it will execute regardless of if the condition is ```True``` or not.

---

### Else Blocks

The ```else``` block can be used in conjunction with an ```if``` statement (never on its own) to do some behavior if the condition fails.

The basic syntax is:

```python3
if condition:
    block1
else:
    block2
```

If the condition is ```True```, then ```block1``` will be executed, otherwise ```block2``` will execute.

For example:

```python3
age = 18

if age >= 21:
    print("You can sit at the bar!")
else:
    print("Come back in a few years")
```
```
Come back in a few years
```

Since the condition ```18 >= 21``` is ```False```, the code within the ```if``` block is _NOT_ executed, and the code within the ```else``` block is executed instead. One day we'll get into the bar...

---

### Elif blocks

To add another layer of complexity to ```if``` statements, we can add multiple conditions to the same block using ```elif``` blocks. This is short for saying _else if_ in english.

We can use this to check for multiple conditions, as such:

```python3
if condition1:
    block1
elif condition2:
    block2
elif condition3:
    block3
```

We can use as many ```elif``` blocks as we need to!

We can also optionally tack on an ```else``` block at the end to act as a fall through. If _all_ of the above conditions fail, the ```else``` block will execute.

```python3
if condition1:
    block1
elif condition2:
    block2
else:
    block3
```

Important to note is that only one of the code blocks will execute per ```if``` statement. Meaning that as soon as a condition is found to be ```True```, its respective block will execute, and no others within the ```if``` statement.

Here's an example:

```python3
age = 19

if age >= 25:
    print("You can rent a car and vote!")
elif age >= 18:
    print("You can vote!")
else:
    print("Wait a few years")
```
```
You can vote!
```

Since the first condition was ```False```, we look at the ```elif``` condition. This one is ```True```, so we execute it's code.

```else``` does not take a condition, since it will always execute if the above conditions are all ```False```.

---
