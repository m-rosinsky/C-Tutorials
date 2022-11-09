# Data Types in Python

At its core, programming is really just writing data to memory, and then using that data to perform a desired task.

Python provides lots of native data types for us to make use of to achieve whatever task we may need to perform. These data types include (but are not limited to):

- ```integer```: whole numbers, positive and negative
- ```double```: decimal numbers, positive and negative
- ```string```: pieces of text typically surrounded in ```"``` or ```'```
- ```boolean```: data representing true or false statements

_NOTE_: There are many more data types in python, but these are the most basic elements of data.

---

### Integers

Integers in python are whole numbers, positive or negative.

Examples include: ```3```, ```0```, and ```-15```

### Doubles

Doubles (also referred to as floats) are numbers containing a decimal point (also referred to as _real_ numbers). These can also be positive or negative.

Examples include: ```-3.0```, ```0.1```, ```-6.2```

### Strings

Strings are a collection of characters typically surrounded in ```"``` or ```'```. Python does not care which one you use.

Examples include: ```"Hello, World"```, ```'password123'```

We can also have empty strings (strings that contain no characters): ```''``` or ```""```

Python also allows us to declare multi-line strings with the use of triple quotes ```"""``` or ```'''```:

```python3
"""
There once was a man from Peru.
Who dreamt he was eating his shoe.
He woke with a fright, in the middle of the night,
to find out that his dream had come true.
"""
```

You might recognize that these look like multi-line comments that were discussed in the last tutorial section. If multi-line strings aren't assigned to anything, the iterpreter ignores it, so python developers often use unassigned multi-line strings as multi-line comments.

---

### Booleans

Boolean data types represent something that is either true or false. Python even provides us with the keywords ```True``` and ```False```, which correspond to a boolean data type. Note that these keywords are case sensitive.

In later sections of this repository, we will cover boolean logic, but for now, just know that booleans represent something true or false.

---

### Declaring variables in Python

We often find that we need to store pieces of data for later use in our program. This can be achieved through variables. To create a variable, we simply write a name for the variable and set it equal to some kind of data:

```python3
# Declare an integer named x and assign it the value 5
x = 5
```

Note that unlike C, we don't need to specify the data type for our variable. Python uses a system called _type inference_. Essentially, the interpreter says, "5 looks like an integer to me!" and assigns x that value of the integer 5.

### Printing variables

We can print variables in python with the ```print``` function we learned about in the section ```1 - Hello World```.

```python3
x = 5

print(x)
```
And when run, this program outputs:
```
5
```

Note that we don't surround ```x``` in quotes. If we did, the ```print``` statement would literally output ```x``` rather than the value of ```x```, ```5```. We only use quotes when we want text to be printed.

---
