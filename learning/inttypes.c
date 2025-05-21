/*  Fundamental Types INT
    Giancarlo Poemape
    2023-10-01
*/
#include <stdio.h>

int main(void){
    short short_a = 5;
    int normal_a = 67;
    unsigned int unsigned_a = 67u;
    long long_a = 67l;

    printf("short_a = %hd, divided by 2 is %d\n", short_a, short_a / 2);
    printf("short_a = %hd, divide by float 3 is %lf\n", short_a, short_a / 2.0);
    printf("67 as char is %c\n", normal_a);
}