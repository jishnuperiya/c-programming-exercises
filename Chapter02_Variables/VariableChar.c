#include <stdio.h>

int main()
{
    char character_A = 'A'; // ascii code is 65, if you give 65, it will work

    printf("Character: %d\n", character_A); //%d is for integer values-->it will print 65
    printf("Character: %c\n", character_A); //%c is for character in text form --> it will print A

    char character_Z = character_A + 25;

    printf("Character: %d\n", character_Z); // will be 90
    printf("Character: %c\n", character_Z); // will be Z

    return 0;
}
