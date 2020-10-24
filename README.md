# printf
Holberton School project
Carlos and Nicolas Ribeiro

# _printf() in the C Programming Language
This project is about recreating the C library function printf. The function printf sends formatted output to `stdout` (standard output stream) by formatting the argument(s) passed in and converting the arguments(s) into a character string. This version will be used as `_printf`.

## Environment
Our printf has been tested on Ubuntu 20.04
Tests done in ElementaryOS 5.1 and  VirtualBox on [Ubuntu](https://atlas.hashicorp.com/ubuntu/boxes/trusty64) via [Vagrant](https://www.vagrantup.com/)(1.9.1)

## Repository Breakdown
Once cloned over, the repository will contain the following files:

|   **File**    |  **Decription**                       |
|---------------|---------------------------------------|
| holberton.h   | header file with prototypes           |
| set_buffer.c     | contains functions to write to the buffer |


### Format tags
Format tags implemented in _printf

| **specifier** | **output**                            |
|---------------|---------------------------------------|
| c             | characters                            |
| s             | string of characters                  |
| d or i        | int to signed decimal                 |
| o             | unsigned int to unsigned octal        |
| u             | unsigned int to unsigned decimal      |
| x or X        | unsigned int to unsigned hexadecimal  |
| p             | pointer address                       |
| %             | no conversion, writes '%'             |
| r             | reverses string input                 |
| R             | converts string input into rot13      |
| b             | unsigned int to binary                |

## How to Use
There are two ways to use the _printf function in your code.
First step is to clone the repository into your directory
```
$ git clone https://github.com/nikolasribeiro/printf.git
```
Once that is done, you can create a static library or use the -I in gcc

### Compile with a static library for _printf
Change your directory into the _printf directory in order to create your static library
```
$ cd printf
```
Compile all the `.c` files in _printf
```
gcc -Wall -Werror -Wextra -pedantic -c *.c
```
All your `.c` files should also have a corresponding `.o` file. Run the following to create your static library:
```
ar -rc lib<LIBRARY-NAME>.a *.o
```
To run your static library with your own `YOUR-FILE.c` file, use the following command:
```
gcc <YOUR-FILE>.c -L. -lib<LIBRARY-NAME> -o <OUT-NAME>
```
### Compile without a static library for _printf
Make sure the _printf directory is in the same directory as your `YOUR-FILE.c` file and then run the following command:
```
gcc -Wall -Werror -Wextra -pedantic -I $PWD/printf printf/*.c <YOUR-FILE>.c
```
The `-I` flag allows you to include the directory of the header file `holberton.h`. `$PWD/printf` takes the absolute path of the _print directory while `printf/*.c` compiles all your `.c` files in _printf

## Use in code
### How to use _printf in your code
Please see the following example when _printf is implemented in your code:

```
#include <holberton.h>

int main(void)
{
  _printf("Let's try to print a %s sentence.\n", "simple");
  return (0):
 }
```
This is an an example output:
```
$ Let's try to print a simple sentence.
```
## Notes
This _printf function currently does not support special flags [+ , - , `, \0 , #], field, width or precision.

## Known Bugs
There are no known bugs at the time.

### Authors
*Nicolas Ribeiro* - [Github](https://github.com/nikolasribeiro) - nikolas.sebastian.ribeiro@gmail.com)
||*Carlos Araque* - [Github](https://github.com/carlosaraque22) - [email] (<a href="correo"> cararqueu@gmail.com</a>)
