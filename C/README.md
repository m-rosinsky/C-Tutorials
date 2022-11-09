# C-Tutorials
A compilation of tutorials for the C programming language to use as reference.

To see compilation instructions for different systems, continue reading below! ⬇️

---

## Installing a C Compiler (GCC)

For much of the reference material included in this repository, it helps to be able to run code on your own machine. This section includes some instructions for compiling your c files on whatever machine you may be using.

#### <ins>Mac/OSX</ins>

This tutorial explains in-depth with visuals the ```gcc``` installation process: https://www.google.com/search?client=safari&rls=en&q=check+if+gcc+is+installed+mac&ie=UTF-8&oe=UTF-8

#### <ins>Linux</ins>

Very simple tutorial here: https://linuxize.com/post/how-to-install-gcc-compiler-on-ubuntu-18-04/

#### <ins>Windows</ins>

Install MinGW, which contains the ```gcc``` compiler. Installation tutorial here: https://dev.to/gamegods3/how-to-install-gcc-in-windows-10-the-easier-way-422j

---

## Compiling a C file

In the most basic form, compiling a C program involves the compiler translating the code you wrote into machine language that the computer can actually understand. This set of machine instructions is collectively referred to as an executable.

There are many compilers that exist, but arguably the most popular is the one from the GNU Compiler Collection (```gcc```).

To run ```gcc```, open a terminal or command prompt and navigate to the location that your ```.c``` file is located that you would like to compile. 

For more info on how to use the ```cd``` command: https://phoenixnap.com/kb/linux-cd-command

To compile your file into an executable, run the command:

```
gcc filename.c -o exectuable_name
```

Obvisouly, replacing ```filename.c``` with the name of your file, and ```executable_name``` with the desired name of the executable that ```gcc``` generates.

Providing your code did not have any errors, an executable with the name you provided will be generated.

You can then run:

```
./executable_name
```

and your program will execute!

---

## IDE Recommendations

A lot of people have asked me what my preferred code editing software is. The straight answer is, it depends on factors such as:
- What is the size and scale of the project I'm working on?
- Are others collaborating on the project with me?
- Do I need built-in testing / testing on-the-fly?
- What operating system am I coding on / target production for?

Of course, there's situational dependence, but ultimately go with what you're used to! I'll make a few recommendations, but take with a grain of salt:

- ```Notepad++```: Perfect for small, single-file edits, or quick on the fly changes. Windows only.
- ```Sublime Text```: Also great for small changes, but wouldn't recommend for a project that goes bigger than a few files.
- ```Vim```: Great for editing right within the terminal or console window, and a must-know for any programmers / pen-testers that may have to modify scripts over an SSH connection. Has a steep learning curve.
- ```VSCode```: Fanastic all-around code editor with lots of built-in capabitilies. Can feel like overkill for small file edits and single-file projects.
- ```Atom```: Don't have much experience with Atom, but from what I've seen so far it seems great. Looks sleek and flexible.

Of course there are many other code editors out there, so use the one that's right for you... and your project!

---
