#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int firstDice(int n){
    if(n == 1 || n == 2)
        return 1 ;
    if(n == 3 || n == 4)
        return 3 ;
    if(n == 5 || n == 6)
        return 5 ;
}

int secondDice(int n){
    if(n == 1 || n == 2)
        return 2 ;
    if(n == 3 )
        return 2 ;
    if( n == 4)
        return 4;
    if(n == 5 || n == 6)
        return 4;
}


int main() {

    int dice1;
    int dice2;
    int roll;
    int sum=0;
    int values;
    int mean;
    int frequency_three = 0;
    int frequency_five = 0;
    int frequency_seven = 0;
    int frequency_nine = 0;
    srand(time(NULL));
    printf("How many times do you want to roll the dice:");
    scanf("%d", &roll);
    for (int i = 1; i<=roll; i++){
        dice1 = rand() % 6 +1;
        dice2 = rand() % 6 +1;
        values = firstDice(dice1) + secondDice(dice2);
        sum += values;
        if (values == 3)
            frequency_three +=1;
         if (values == 5)
            frequency_five += 1;
         if (values == 7)
            frequency_seven += 1;
        if (values ==9)
            frequency_nine += 1;

    }

    mean = sum / roll;
    printf("Sum          Frequency\n");
    printf(" 3              %d          \n", frequency_three);
    printf(" 5              %d          \n", frequency_five);
    printf(" 7              %d          \n", frequency_seven);
    printf(" 9              %d          \n", frequency_nine);
    printf("Mean value is: %d", mean);

    return 0;
}
