#include <stdio.h>
#include <stdlib.h>
int main() {
    int first_input;
    int second_input;
    int third_input;
    int max;
    int min;
    int middle;

    while(first_input>=0 && second_input>=0 && third_input>=0 && abs(first_input-second_input)>=7 &&
    abs(first_input-third_input)>=7 && abs(second_input-third_input)>=7){
        printf("Please enter first integer:");
        scanf("%d", &first_input);
        printf("Please enter second integer:");
        scanf("%d", &second_input);
        printf("Please enter third integer:");
        scanf("%d", &third_input);
        if(first_input > second_input && first_input > third_input && second_input > third_input){
            max = first_input;
            min = third_input;
            middle = (max+min)/2;
        }else if(second_input > first_input && first_input > third_input && second_input > third_input){
            max = second_input;
            min = third_input;
            middle = (max+min)/2;
        }else if(third_input>first_input && first_input>second_input && third_input>second_input){
            max = third_input;
            min = second_input;
            middle = (max+min)/2;
        }else if(third_input>first_input && second_input>first_input && third_input>second_input){
            max = third_input;
            min = first_input;
            middle = (max + min) / 2;
        }else if(first_input >third_input && third_input>second_input && first_input>second_input){
            max = first_input;
            min = second_input;
            middle = (max + min) / 2;
        }else if(second_input > first_input && third_input > first_input && second_input > third_input){
            max = second_input;
            min = first_input;
            middle = (max + min) / 2;
        }
        printf("Min: %d\n", min);
        printf("Middle: %d\n", middle);
        printf("Max: %d\n", max);
        printf("***The odd integers are:\n");

        for(int i = min; i< middle; i++){
            if (i%2 !=0) {
                printf("value: %d\n", i);
            }
        }
        printf("***The even integers are:\n");
        for(int i = middle; i< max; i++){
            if (i%2 ==0) {
                printf("value: %d\n", i);
            }
        }

    }
    return 0;
}
