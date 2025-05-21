/*  Fundamental Types sizeof operator
    Giancarlo Poemape
    2023-10-01
*/
#include <stdio.h>

int main(void){
    int a = 5, b = 10, c = 6;
    double average = 0.0; //good practice
    char ch = 'g';

    printf("on my mac os: \n");
    printf("int is %lu bytes.\n", sizeof(int));
    printf("long int is %lu bytes.\n", sizeof(long int));
    printf("char is %lu bytes.\n", sizeof(ch));
    printf("double is %lu bytes.\n", sizeof(double));
    printf("float is %lu bytes.\n", sizeof(float));
    printf("long double a is %lu bytes.\n", sizeof(long double));
    printf("unsigned int is %lu bytes.\n\n", sizeof(unsigned int));


    printf("g in ASCII is %d\n", ch);
    printf("ch the character %c\n", ch);
    printf("the consecutive chars are %c %c %c\n", ch, ch + 1, ch + 2);
    printf("the ASCII 'A' character is %d\n", 'A');
    
    return 0;
}