# Custom printf Project by Delbert Kipyegon and Silvia Irware

## Description
This team project is part of the first year curriculum of ALX. Our custom printf function replicates some functionalities of the C standard library printf() function.

### What you should learn from this project:
- Collaboration with git (push, pull, merge, etc.) in a team setting
- Applying variadic functions in C
- How to use `git submodules`
- The complexities and functionalities of `printf`
- Managing a large number of files and finding an efficient workflow

## Prototype
```bash
int _printf(const char *format, ...);
```
## Usage
- Our `_printf` function prints a formatted string to the standard output (stdout)
- All files were created and compiled on Ubuntu 20.04 LTS using GCC 9.3.0 with the command `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
- `_printf` returns the number of characters in the output string on success, -1 otherwise
- Call it this way: `_printf("format string", arguments...)` where format string can contain conversion specifiers and flags, along with regular characters

## Examples
- `_printf("My name is Del\n")` prints "My name is Del", followed by a new line
- `_printf("%s", "Hi Silvia")` prints "Hi Silvia"
- `_printf("4 + 8 is: %d", 12)` prints "4 + 8 is: 12"

## Tasks
These are all the tasks of this project. The completed ones link to the corresponding files.

0. Write a function that produces output according to a format.
1. Handle the following conversion specifiers:
   - c : converts input into a character
   - s : converts input into a string
   - % : print a single %
   - d : converts input into a base 10 integer
   - i : converts input into an integer
2. Handle the following custom conversion specifier:
   - p : int input is converted to a pointer address
3. Handle the following flag characters for non-custom conversion specifiers:
   - l, h
4. Handle the field width for non-custom conversion specifiers.
5. Handle the precision for non-custom conversion specifiers.
6. Handle the 0 flag character for non-custom conversion specifiers.
7. Handle the - flag character for non-custom conversion specifiers.
8. Use a local buffer of 1024 chars in order to call write as little as possible.

## Authors
- Delbert Kipyegon - delbertkip@gmail.com
- Silvia Irware - silviairware372@gmail.com
