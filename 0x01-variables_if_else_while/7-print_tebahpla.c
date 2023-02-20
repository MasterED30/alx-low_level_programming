#include <stdio.h>

/**
* main - A program that prints the lowercase alphabet in reverse,
* followed by a new line
* Return: Always 0 (Success)
*/

int main(void)

{

char lower_alph;

for (lower_alph = 'z'; lower_alph >= 'a'; lower_alph--)

{

putchar(lower_alph);

}

putchar('\n');

return (0);

}
