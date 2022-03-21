#include <stdio.h>
#define MAX 100

int main() {
    char input[MAX];
    int zero_count=0;
    int one_count=0;
    int two_count =0;
    int three_count = 0;
    int four_count = 0;
    int five_count = 0;
    int six_count = 0;
    int seven_count =0;
    int eight_count = 0;
    int nine_count = 0;
    int j;



    printf("Please enter a string: \n");
    fgets(input,sizeof(input),stdin);

    for(int i=0; input[i] != '\0'; i++){

        if(input[i] == '0'){
            zero_count ++;
        }else if (input[i] =='1') {
            one_count ++;
        }else if (input[i] == '2') {
            two_count ++;
        }else if (input[i] == '3'){
            three_count ++;
        }else if (input[i] == '4') {
            four_count ++;
        }else if (input[i] == '5') {
            five_count ++;
        }else if (input[i] == '6') {
            six_count++;
        }else if (input[i] == '7') {
            seven_count++;
        }else if (input[i] == '8') {
            eight_count++;
        }else if (input[i] == '9') {
            nine_count++;
        }


    }
    for (int i = 0; input[i] != '\0'; ++i) {
        while (input[i] >= '0' && input[i] <= '9') {
            for (j = i; input[j] != '\0'; ++j) {
                input[j] = input[j + 1];
            }
            input[j] = '\0';
        }
    }



    printf("digit: 0; number of occurences:  %d\n",zero_count);
    printf("digit: 1; number of occurences:  %d\n",one_count);
    printf("digit: 2; number of occurences:  %d\n",two_count);
    printf("digit: 3; number of occurences:  %d\n",three_count);
    printf("digit: 4; number of occurences:  %d\n",four_count);
    printf("digit: 5; number of occurences:  %d\n",five_count);
    printf("digit: 6; number of occurences:  %d\n",six_count);
    printf("digit: 7; number of occurences:  %d\n",seven_count);
    printf("digit: 8; number of occurences:  %d\n",eight_count);
    printf("digit: 9; number of occurences:  %d\n",nine_count);

    printf("Entered array without digits:\n");
    printf("%s\n", input);



    return 0;
}
