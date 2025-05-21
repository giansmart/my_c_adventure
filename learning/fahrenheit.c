/* The conversor from Celsius to Fahrenheit degrees
by Giancarlo 
2023-10-01
*/

#include <stdio.h>

int main(void) {
    int fahrenheit, celsius;
    printf("Enter the temperature in Fahrenheit as an integer: ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32)/ 1.8; // 1.8 is the conversion factor
    printf("The temperature in Celsius is %d\n", celsius);
    return 0;
}