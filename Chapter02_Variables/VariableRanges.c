#include <float.h>
#include <limits.h>
#include <stdio.h>

int main()
{
    int a = 1;
    unsigned int b = 1u;
    float c = 1.0f;
    double d = 1.0;
    char e = 42;

    printf(
        "Variable a: %lu\n",
        sizeof(
            a)); // %lu stands for long unsigned int . because sizeof() always returns a positive value and can be very big
    printf("Variable b: %lu\n", sizeof(b));
    printf("Variable c: %lu\n", sizeof(c));
    printf("Variable d: %lu\n", sizeof(d));
    printf("Variable e: %lu\n", sizeof(e));

    printf("Int range: %d, %d\n", INT_MIN, INT_MAX); // INT_MAX is the so called defined value
    printf("Float range: %E, %E\n",
           FLT_MIN,
           FLT_MAX); // %E is the scientific notation. becuse float max value is very large

    return 0;
}
