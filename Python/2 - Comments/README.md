# Comments in Python

Comments in python are used to provide documentation for ourselves as developers, or for others that may be reading / editing our code.

When working with a team, it's always a big help to those working with you to provide documentation on how your program works, to save the time in reviewing your code. This is often done with comments!

---

### Single Line Comments

Single line comments in python start with the ```#``` symbol. Anything following this symbol on the same line will be ignored by the interpreter!

```python3
# print to the console
print("Hello World!")
```

---

### In Line Comments

Single line comments can also be used on the same line as functional code. Only the text _following_ the ```#``` symbol will be ignored by the interpreter. Everything else on the same line will still be executed.

```python3
print("Hello, World!") # print to the console
```

---

### Multi Line Comments

Comments can also span multiple lines. They are opened by triple quotes ```"""``` or ```'''``` and closed by a matching set of triple quotes.

Anything between the quote sets will be ignored by the interpreter.

```python3
"""
This file writes hello world
to the console.
"""
print("Hello World!")
```

_NOTE_: The triple quote notation is actually how we define multi-line strings in python. However, since we're not assigning the string to anything, the interpreter ignores it and it functionally acts as a comment.

---

### Commenting Out Code

Comments can also be used to "comment out" pieces of code.

If we don't want a certain line to execute for whatever reason, we can place it in a comment. That way, if we need to code again in the future, we can simply uncomment it.

```python3
# print("Line 1")
print("Line 2")
```

---

### Exercises

Check out the file ```exercise_1.py``` within this folder!

---
