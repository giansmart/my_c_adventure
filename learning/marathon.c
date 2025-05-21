/* The distance of a marathon in kilometers
by Giancarlo 
2023-10-01
*/

#include <stdio.h>

int main(void){
    // int miles = 26, yards = 385;
    int miles, yards;
    printf("Enter the distance of a marathon in miles and yards: ");
    scanf("%d %d", &miles, &yards);
    double kilometers = 0.0;

    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("A marathon is %lf kiometers\n", kilometers);
    return 0;
}