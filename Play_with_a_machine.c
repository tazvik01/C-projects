#include <stdio.h>

int main() {

    int min;
    int max;
    int user_input;
    int counter = 0;
    int program_guessed_number;

/*
 * This while loop continues to ask the user for a range until min < max.
 */

    while (min > max ) {
        printf("Range minimum:");
        scanf("%d", &min);
        printf("Range maximum:");
        scanf("%d", &max);

        if (min < max){
            break;
        }
    }
/*  This body of code checks, if the user_input is 1 and if it is then we subtract from max or
 *  if user input is 2 then we add to min and if the user input is 3 that means the user is
 *  satisfied with program guessed number.
 */
    while (user_input != 3) {
        program_guessed_number = (min + max)/ 2;
        printf("Guessed number: %d \n", program_guessed_number);
        printf("1. TOO LARGE \n");
        printf("2. TOO SMALL \n");
        printf("3. FOUND \n");
        /* Asks the user for input and for every try the counter goes up by 1 */
        scanf("%d", &user_input);
        counter = counter + 1;
        if (user_input == 1) {
            max = program_guessed_number - 1;
        } else if (user_input == 2) {
            min = program_guessed_number + 1;
        } else if (user_input == 3) {
            printf("FOUND IT \n");
            printf("No of tries: %d", counter);
        }
    }
    return 0;
}
