#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%c%c%c\n", c1, c2, c3);   // Combines each character together into one word
    printf("%i %i %i\n", c1, c2, c3); // Logs ASCII values of each character
}