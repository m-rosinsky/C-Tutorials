# Writing your first 'Hello, World!' program!

### 1 - Opening your first C file

To open our first C file, start by opening your code editor and creating a new file.

You can call the file whatever you like, but make sure it has the ```.c``` extension, such as:

- ```my_file.c```

Save the file somewhere you know you'll be able to find later.

---

## 2 - The main function

Every C file must have exactly 1 ```main``` function. The ```main``` function tells the program where to start executing.

The basic structure of a ```main``` function looks like this:

```C
int main()
{
    
}
```

Whatever code we end up writing within the ```{``` ```}``` symbols will be executed first!

The ```int``` keyword at the beginning specifies that the ```main``` function will return an integer. The return value of the ```main``` function denotes the exit status of the program, which is sort of similar to an HTTP response status. We'll touch more on the exit status of a program in later references.

The ```(``` ```)``` symbols after the word ```main``` denote the parameters that the ```main``` function will take in. We'll eventually feed our ```main``` function some parameters in future references, but for now, it's perfectly acceptable to leave them blank as we have here.

_NOTE_: The C language IS case sensitive, so the code shown here:

```C
int Main()
{
  
}
```

is INVALID, due to the capital 'M'. Make sure to check your spelling as well!

---

## 3 - Printing Hello World!

We can now try to get our program to print "Hello, World!" to the console.

To do this, we need to invoke one of the built-in C library functions provided for us by the gurus that made the C language.

This library function is the ```printf``` function. The ```f``` denotes that what we are printed is a _formatted_ piece of text. More on that later.

```C
int main()
{
    printf("Hello, World!");
}
```

And there we go!

---

## 4 - Compiling and Running.

C is a _compiled_ programming language, meaning it first has to be _compiled_ into machine instructions that the computer can understand. Once we generate this set of instructions, also referred to as an executable, we can execute our program. So it's a two step process: compile + run!

To compile our file, we need to open a terminal window. For windows I would recommend running a Powershell console, and for Mac/Linux, fire up a Terminal window.

Navigate to the directory that our ```.c``` file is located in. In the example below, I saved my file on my Desktop:

| ![alt text](https://i.imgur.com/k2J1x6u.png "Navigating to the folder with my C file") |
|:--:|

To compile our C file, we can run the command:

```
gcc file.c -o file
```

This command is doing the following:
- ```gcc``` the compiler we are using
- ```file.c``` the name of the file we are compiling
- ```-o``` option for the ```gcc``` command, specifying that the name following will be the name of the executable generated
- ```file``` the name of the executable to generate. While not mandatory, it is standard practice to name the executable the same name as the file, but without the ```.c``` extension.

| ![alt text](https://i.imgur.com/eRiRkQM.png "Uh oh") |
|:--:|

Uh oh... only on step one and we've already upset our compiler... not a good first impression...

C error messages are notoriously "fun" to decipher. This one esssentially boils down to that the ```printf``` function is unrecognized by the C compiler. So what gives?

---

## 5 - The C Standard Library

So why was our ```printf``` function unrecgonized?

Essentially, there are tons and tons of C standard library functions that are at our disposal. So many, in fact, that the designers of the language though it was wasteful to automatically include all the library functions automatically in every file.

There's some overhead with loading all of those library functions in to every project, especially considering we probably will only end up using a small fraction of them in a given project.

The solution to this was to divide up the library functions, like ```printf``` into separate categorized folders, or header files, that the programmer must include specifically. These folders are divided up typically by functionality.

For example, most of the library functions that have to do with the input or output (io) are located in a header called ```stdio.h```. (```.h``` signifies a header, which we'll talk about more in later references)

So all we have to do is include this header in our file, and C will then recognize our ```printf``` function:

```C
#include <stdio.h>

int main()
{
    printf("Hello World!");
}

Now let's recompile by running that ```gcc``` command from before...

| ![alt text](https://i.imgur.com/x9XlEUt.png "Fixed!") |
|:--:|

And now we see that our file successfully compiles with no crazy error messages! Now we can just type:

```
./file
```

to execute our executable and see the results! Congrats on writing your first Hello World! program in C!

---
