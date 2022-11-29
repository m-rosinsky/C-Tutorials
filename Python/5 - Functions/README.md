# Functions in Python

Let's say I wanted to find the absolute value of a given number. I could write a program like so to accomplish this:

```python3

num1 = 5
num2 = -2

if num1 < 0:
    num1 *= -1      # Flip the number to positive by muliplying it by -1
    
if num2 < 0:
    num2 *= -1

print(num1)
print(num2)
```
```
5
2
```

We got the absolute value of both the numbers. But just from looking at this code, we can see this is clunky looking!

We wrote the same code twice for both ```num1``` and ```num2```!

Surely theres a better way.

---

### What are Functions?

Functions are like a blueprint for executing the same block of code given different parameters.

We can use the analogy of a black box to think of a function. Some values enter the box (inputs / parameters), and a result is produced (the return value).

In the case of the absolute value function, the black box may look like this (excuse my MS paint skills):

| ![alt text](https://i.imgur.com/8hNO6wv.png "Abs Black Box") |
|:--:|

With a conceptual idea of functions in mind, we can look at creating one:

---

### Creating a Function

In Python, we can use the ```def``` keyword to _define_ a new function. We then give it a name, in our case ```absolute_value```.

```python3
def absolute_value():
    # Code goes here
```

So what are those two ```()``` for? That's where we put our inputs, also called parameters.

In our black box example, this is where we define what inputs our function is expecting.

In the case of our ```absolute_value``` example, we are expecting 1 value as an input, so let's give that input a name, ```n``` so we can use it later:

```python3
def absolute_value(n):
    # Code goes here
```

```n``` now stands in place of any potential input that our ```absolute_value``` function receives. We can then refer to that placeholder within the function when we want to use it.

Now all we need to do is define the behavior of our function, in other words, what it actually does.

```python3
def absolute_value(n):
    if n < 0:
        n *= -1
    
    return n
```

And there's our completed ```absolute_value``` function! We take in one value which we call ```n```. If ```n``` is negative, just multiply it by ```-1```. Then use the ```return``` keyword to let our function know that the next value will be the output of our black box.

---

### Calling the Function

So we've created our "black box" for an absolute value function. Now all we have to do is feed it some input!

```python3
def absolute_value(n):
    if n < 0:
        n *= -1
        
    return n

num1 = absolute_value(-2)
print(num1)
```
```
2
```

```num1``` will take on the ```return``` value of our ```absolute_value``` function with the input parameter ```-2```.

In this case, since we passed ```-2``` as an input parameter, ```n``` will take on the value of ```-2``` during that function call initially.

We can call the function as many times as we want as well with different parameters.

---

### Return Values are Optional

A function also doesn't necessarily need a ```return``` value. Let's look at this function:

```python3
def greet(name):
    print("Hello " + name + "!")

greet("Mike")
greet("Dave")
```
```
Hello Mike!
Hello Dave!
```

Notice that our function doesn't contain the ```return``` keyword. That's because no value is actually returned from the function. It's executing a print statement, but it's not returning a value.

We can see this further by trying to assign something to the function:

```python3
def greet(name):
    print("Hello " + name + "!")

x = greet("Mike")
print(x)
```
```
Hello Mike!
None
```

Our function printed out the greeting like normal, but since there was no return value from the function, ```x``` gets assigned the value ```None```. We haven't dicussed the ```None``` type yet in these tutorials, but we can logically infer that nothing was returned.

---

### Multiple Inputs

Functions can also take multiple inputs, similar to feeding multiple values into a black box.

Check out this example for a sum of three numbers function:

```python3
def sum3(a, b, c):
    return a + b + c

x = sum3(1, 2, 3)
print(x)
```
```
6
```

Our function takes in 3 inputs, and returns 1 output (the sum of the three inputs).

These are functions at a basic level!

