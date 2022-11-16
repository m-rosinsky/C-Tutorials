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

Note that ```else``` does not take a condition, since it will always execute if the above conditions are all ```False```.

---

### While Loops

While loops are used to repeat a certain block of code as long as a certain condition remains ```True```.

The syntax is as follows:

```python3
while condition:
    statements
```

The code inside ```statements``` will loop repeatedly while ```condition``` is True. When condition is not true, the loop will exit after completing.

Here is an example to count down to zero from a certain number:

```python3
n = 10

while n >= 0:
    print(n, end=" ")   # print will print a " " at the end, rather than a new line
    n -= 1              # Set n to itself - 1
```
```
10 9 8 7 6 5 4 3 2 1 0
```

While the condition ```n >= 0``` remains ```True```, the loop will keep repeating. As soon as ```n``` becomes ```-1```, the condition is no longer ```True```, and the loop will exit.

---

### Break and Continue

```break``` and ```continue``` are keywords that we can use within loops to give us greater control.

If a ```break``` line is entered, the loop will exit regardless of if the condition is still ```True```.

For example, we can rewrite the countdown program from before:

```python3
n = 10

while True:         # loop infinitely
    print(n, end=" ")
    
    if n == 0:
        break
        
    n -= 1
```
```
10 9 8 7 6 5 4 3 2 1 0
```

We can see this produces the same output as before, but we use a ```break``` statement instead.

---

A ```continue``` statement works similarly to ```break```, but instead of exiting the loop, it automatically goes back to the top of the loop.

For example, if we want to omit the value ```5``` from our countdown, we can use a ```continue```:

```python3
n = 10

while n >= 0:
    n -= 1
    if n == 5:
        continue
    print(n, end=" ")
```
```
9 8 7 6 4 3 2 1 0
```

Notice that 5 is not printed, since we hit a ```continue``` block before the ```print``` statement.

---

### For Loops

For loops can be used in two main different ways. Both involve a local variable that steps through something iterable. For example, each item in a list, or each character in a string.

Here's an example of stepping through each letter in a string:

```python3
name = "mike"

for letter in name:
    print(letter, end=" ")
```
```
m i k e
```

Each iteration of the loop, ```letter``` takes on the value of each character in the string sequentially.

For example, in the first iteration, ```letter``` will be set to ```m``` since it is the first character in the string. Then it will be ```i```, and so on until we reach the end of the string.

---

### Range

We can also use a for loop to step through a range of numbers with python's built-in ```range``` function.

The ```range``` function can take 1-3 parameters.

If we use 1 parameter, the range will start at zero and count up to the parameter (but not including) by 1 each time:

```python3
for i in range(5):
    print(i, end=" ")
```
```
0 1 2 3 4
```

Notice how we start at zero and go up to 5, but do not reach 5.

If we use two parameters, it will inclusively start at the first parameter, and count to the second parameter without reaching it:

```python3
for i in range(1, 10):
    print(i, end=" ")
```
```
1 2 3 4 5 6 7 8 9
```

We include the start parameter, 1, but we don't include the end parameter, 10.

If we use 3 parameters in the ```range``` function, the third parameter will function as the step. Meaning we increment by that amount each iteration.

```python3
for i in range(0, 9, 2):
    print(i, end=" ")
```
```
0 2 4 6 8
```

We can see that we start at zero, and increment by 2 each time, until we reach or exceed the end parameter (9).

---
