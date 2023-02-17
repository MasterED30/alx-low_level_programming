#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - A program that prints the alphabet in lowercase,
* followed by a new line,
* print all alphabets except q and e
* Return: Aways 0 (Sucess)
*/

int main(void)

{

char lower_alph = 'a';


while (lower_alph <= 'z')

{

if (lower_alph != 'e' && lower_alph != 'q')

{

putchar(lower_alph);

}

lower_alph++;

}
putchar('\n');

return (0);

}
