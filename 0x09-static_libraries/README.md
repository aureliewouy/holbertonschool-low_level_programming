0x09. C - Static libraries
==========================

-   Foundations - Low-level programming & Algorithm -- Hatching out

Resources
---------

**Read or watch**:

-   [What Is A "C" Library? What Is It Good For?](https://intranet.hbtn.io/rltoken/4Dki8HiSS6QBDwsznMbXFA "What Is A "C" Library? What Is It Good For?")
-   [Creating A Static "C" Library Using "ar" and "ranlib"](https://intranet.hbtn.io/rltoken/4Dki8HiSS6QBDwsznMbXFA "Creating A Static "C" Library Using "ar" and "ranlib"")
-   [Using A "C" Library In A Program](https://intranet.hbtn.io/rltoken/4Dki8HiSS6QBDwsznMbXFA "Using A "C" Library In A Program")
-   [What is difference between Dynamic and Static library(Static and Dynamic linking)](https://intranet.hbtn.io/rltoken/wC9HCOvJwa_Co1nZuL4QMA "What is difference between Dynamic and Static library(Static and Dynamic linking)") (*stop at 4:44*)

**man or help**:

-   `ar`
-   `ranlib`
-   `nm`

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/9pxXHdbXznA4SYhiXG08MA "explain to anyone"), **without the help of Google**:

### General

-   What is a static library, how does it work, how to create one, and how to use it
-   Basic usage of `ar`, `ranlib`, `nm`

Requirements
------------

### C

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS
-   Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` `and -pedantic`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc... is forbidden
-   You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `holberton.h`
-   Don't forget to push your header file

### Bash

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your scripts will be tested on Ubuntu 14.04 LTS
-   All your files should end with a new line ([why?](http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789))
-   The first line of all your files should be exactly `#!/bin/bash`
-   A `README.md` file, at the root of the folder of the project, describing what each script is doing
-   All your files must be executable