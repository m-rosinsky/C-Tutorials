# Writing your first 'Hello, World!' program in Python3

### Creating your first python file.

To get started, open your desired code editor and create a new file. Make sure you save the file to somewhere you know, and ensure the file has the extension ```.py```. For example:

```
my_file.py
```

---

### The main function

We can define a ```main``` function to indicate where our program execution should start.

In python, however, the ```main``` function is optional. If a ```main``` function is not provided, program execution will simply start at the top of the file.

For now, we'll leave the ```main``` function out, as it has some confusing syntax. In case you are interested, however, this is what a ```main``` function in python looks like:

```python3
if __name__=='__main__':
    # Program execution starts here
```

But feel free to leave this out if you would like for the sake of this exercise.

---

### Printing 'Hello, World!'

Python provides us with a built-in function for writing output to the console. This is the ```print``` function.

In order to print text, we need to surround whatever we are printing with quotes. Python doesn't care if we use ```'``` or ```"``` as our quotes, so both of these implementations are perfectly viable:

```python3
print("Hello, World!")
```
or
```python3
print('Hello, World!')
```

Make sure you save your file!

---

### Running your file.

To run our file, open up Terminal (Mac/Linux) or Command Prompt/Powershell (Windows).

Navigate to the directory containing the ```.py``` file you made with the ```cd``` command.

Then just type the command:

```
python3 my_file.py
```

and you should see the file output:

```
Hello, World!
```

---

Congrats on writing your first python program!

---
