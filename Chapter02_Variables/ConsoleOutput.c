#include <stdio.h>

int main()
{
    int a = 1;
    unsigned int b = 1u; // remember to add u at the end of the variable value for unsigned integer values
    float c = 1.0f;      // if you dont type f at the end, by default c will be double.
    double d = 1.0;

    printf("The value of variable a is: %d\n", a);
    printf("The value of variable b is: %u\n", b);
    printf("The value of variable c is: %f\n", c);
    printf("The value of variable d is: %f\n", d); // actually space holder for double is %lf

    return 0;
}
