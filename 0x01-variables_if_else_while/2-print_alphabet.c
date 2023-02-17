#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - A program that prints the alphabet in lowercase,
* followed by a new line
* Return: Always 0 (Success)
*/

int main(void)

{
char lower_alph;

for (lower_alph = 'a'; lower_alph <= 'z'; lower_alph++)
{
putchar(lower_alph);
}
putchar('\n');
return (0);
}
