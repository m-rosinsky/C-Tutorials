# Data Types in C

Programming is essentially writing pieces of data into memory for our computer to remember, and using that data to perform different tasks.

However, data can come in different forms. The C programming language has a few native data types built in for us to make use of. These include:

- ```int```: integer data type. Whole numbers positive, zero, or negative (```32```, ```0```, ```-4```)
- ```float```: any non-whole number typically associated with a decimal point (```0.4```, ```-1.2```, ```0.0```)
- ```double```: same as a float, but double the size. Used for more precise decimals
- ```char```: data to hold ONE ASCII character. Always surrounded in single quotes. (```'a'```, ```'b'```, ```'!'```)

---

### Integers

Integers, or ```int``` are used for any whole numbers, positive or negative.

They typically take up 4 bytes of space, but it ultimately depends on the system definitions.

Examples include: ```0```, ```112```, ```-19```.

---

### Floats and Doubles

Floats and doubles are used to hold decimal numbers, sometimes referred to as _real_ numbers.

The difference between a float and a double is that a float typically uses 4 bytes, and a double uses 8 bytes (_double_ the space of a float).

To learn more about how floats and doubles are stored in binary format in memory, check out this article on IEEE notation: https://www.geeksforgeeks.org/ieee-standard-754-floating-point-numbers/

It's not necessary to know how it's stored to use floats and doubles, but it's good background knowledge.

---

### Characters

Characters, or ```char``` are used to store a single byte, typically holding an ASCII character.

All characters have a number associated with it, and this number is derived from the ASCII table: https://www.asciitable.com/

| ![alt text](https://www.asciitable.com/asciifull.gif "Navigating to the folder with my C file") |
|:--:|

For example, the character 'A' corresponds to the number 65 (3rd column, 2nd row).

---

### Declaring variables in C.

In C, it's often necessary to store pieces of data in memory. To do this, we follow this format:

```
<datatype> <name> = <value>;
```

For example, if we wanted to create an integer named ```x``` and assign it the value ```5```, we can write:

```C
int x = 5; // Don't forget the semicolon!
```

Note that we only need to specify the data type when we first _declare_ the piece of data.

If we later want to modify an _existing_ piece of data, we don't need to specify the data type:

```C
// declare x with the value 5
int x = 5;

// modify x to now hold the value 6
x = 6;
```

---

### Printing to console.

Check out the next tutorial section ```4 - Print Formatting``` for a guide on printing data to the console!

---

### Exercises

No exercises for this tutorial, but check out the ```data_types.c``` file in this folder for a good reference.
