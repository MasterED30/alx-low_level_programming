#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main -A program that prints the alphabet in lowercase,and then in uppercase,
* followed by a new line
* Return: Always 0 (Success)
*/

int main(void)

{
int lower_alph;
int upper_alph;

for (lower_alph = 'a'; lower_alph <= 'z'; lower_alph++)

putchar(lower_alph);

for (upper_alph = 'A'; upper_alph <= 'Z'; upper_alph++)

putchar(upper_alph);

putchar('\n');
return (0);
}
