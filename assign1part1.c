#include <stdio.h>


int main() {
    int first_input;
    int second_input;
    int max;
    int min;
    int sum ;

    printf("Please enter first integer:");
    scanf("%d", &first_input);
    printf("Please enter second integer:");
    scanf("%d", &second_input);
/*
 * Continues to ask the user for 2 integers as long as both integers are greater than zero
 */
    while(first_input>=0 && second_input>=0 && first_input != second_input){
        sum = 0;

/*
 * This determines the max or min. So, if first_input is greater than second_input then
 * max is first_input and min is second_input and vice versa.
 */
        if (first_input > second_input){
            max = first_input;
            min = second_input;
        } else {
            max = second_input;
            min = first_input;
        }
/*
 * This for loop iterates through the numbers between min and max, including min and max
 * and then sums them up.
 */
        for( int i = min; i<= max; i++){
            sum += i;

        }
        printf("Min: %d\n", min);
        printf("Max: %d\n", max);
        printf("Sum: %d\n", sum);

        printf("Please enter first integer:");
        scanf("%d", &first_input);
        printf("Please enter second integer:");
        scanf("%d", &second_input);
    }
    return 0;
}
