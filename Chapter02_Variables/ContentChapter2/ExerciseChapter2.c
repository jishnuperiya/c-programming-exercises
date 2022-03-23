#include <stdio.h>


// 1) read the age of the user (positive integer)
// 2) calculate how many days, hours, minute, seconds he is living (positive integer)
// 3) print the  results

int main()
{

    unsigned int age;

    printf("please enter your age in years: ");
    scanf("%u", &age);


    unsigned int days = age * 365u;
    unsigned int hours = days * 24u;
    unsigned int minutes = hours * 60u;
    unsigned int seconds = minutes * 60u;

    printf("you are living since %u days \n", days);

    printf("you are living since %u hours\n", hours);

    printf("you are living since %u minutes\n", minutes);

    printf("you are living since %u seconds \n", seconds);
    return 0;
}
