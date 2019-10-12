#include "holberton.h"

int main(void)
{
  _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
  return (0);
}
julien@ubuntu:~/0x09. Static Librairies$ gcc main.c -L. -lholberton -o quote
julien@ubuntu:~/0x09. Static Librairies$ ./quote 
"At the end of the day, my goal was to be the best hacker"
    - Kevin Mitnick
