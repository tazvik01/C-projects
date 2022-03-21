#include <stdio.h>
#include "io.h"


//#define _CRT_SECURE_NO_WARNINGS

#define BUFFER_SIZE 64

#define MIN     0
#define MAX     1
#define ODD     2
#define EVEN    3
#define MINMAX  4
#define ODDEVEN 5
int min;
int max;
int odd_count;
int even_count;

// prototypes of your functions you need to write

// this function fills input buffer using values
// obtained with the function get_value()
void reading(int[]);

// this function performs processing of data in local buffer
// and put results back into local buffer
void processing(int[]);

// this function transfers data between two buffers
// it is used to transfer data from input buffer to local buffer
// and to transfer data from local buffer to output buffer
void transferring(int[], int[]);

// this function submit the results stored
// in output buffer for validation
void submitting(int[]);



// two functions provided to you (defined in io.h and io.c) are:
// int get_value(void);
//       this function generates a single value
//       you use it to obtain this value and put it into an input buffer
// int submit_result(int[]);
//       you use this function to submit the data processing results
//       for validation (your results are checked inside this function)


int main(void) {
    
    int inputBuffer[BUFFER_SIZE] = {0};
    int localBuffer[BUFFER_SIZE] = {0};
    int outputBuffer[BUFFER_SIZE]= {0};

    reading(inputBuffer);

    while (inputBuffer[0]!=-1) {

        transferring(inputBuffer,localBuffer);


        processing(localBuffer);


        transferring(localBuffer,outputBuffer);



        submitting(outputBuffer);



        // set all buffers to 0
        reading(inputBuffer);
    }


    return 0;
}

void reading(int inputBuffer[]) {
// add you code here

/**
 * The following lines of code fills out the input buffer using the function,
 * get_value()
 */
    for(int i = 0; i < inputBuffer[1] +2; i++){
        inputBuffer[i] = get_value();

    }


}

void processing(int localBuffer[]) {
// add you code here
/**
 * The following lines of code does specific calculations based on the operation_ID
 * If the operation_ID is MIN then in the following lines of code we are calculating
 * the minimum of the data points and assigning it to the designated position in localBuffer[]
 */
    if(localBuffer[0] == MIN) {
        min = localBuffer[2];
        for (int i = 2; i < localBuffer[1]+2; i++) {
            if (min > localBuffer[i]) {
                min = localBuffer[i];
            }
            localBuffer[2] = min;
        }

        localBuffer[2] = min;
        localBuffer[1] =1;

    }

/**
 * If the operation_ID is MAX then in the following lines of code we are calculating
 * the maximum of the data points and assigning it to the designated position in localBuffer[]
 */
    if (localBuffer[0] == MAX){
        max = localBuffer[2];
        for(int i =2; i < localBuffer[1] +2; i++){
            if (max < localBuffer[i]){
                max = localBuffer[i];
            }

        }

        localBuffer[2] = max;
        localBuffer[1] = 1;

    }

    /**
     * If the operation_ID is ODD then in the following lines of code we are calculating
     * how many odd data points there are and assigning it to the designated position in localBuffer[]
     */

    if (localBuffer[0] == ODD) {
        odd_count = 0;
        for(int i =2; i < localBuffer[1] +2; i++){
            if (localBuffer[i] % 2 !=0){
                odd_count++;

            }
        }

        localBuffer[2] = odd_count;
        localBuffer[1] = 1;

    }

    /**
     * If the operation_ID is EVEN then in the following lines of code we are calculating
     * how many EVEN data points there are and assigning it to the designated position in localBuffer[]
     */

    if (localBuffer[0] == EVEN) {
        even_count =0;
        for(int i =2; i < localBuffer[1] +2; i++){
            if (localBuffer[i] % 2 ==0){
                even_count ++;

            }
        }

        localBuffer[2] = even_count;
        localBuffer[1] = 1;

    }

   /**
    * If the operation_ID is MINMAX then in the following lines of code we are calculating
    * the minimum and maximum of the data points and assigning it to the designated position in localBuffer[]
    */
    if(localBuffer[0] == MINMAX){
        max = localBuffer[0];
        for(int i =2; i < localBuffer[1]+2; i++) {
            if (max < localBuffer[i]) {
                max = localBuffer[i];

            }
        }
        min = localBuffer[2];
            for(int i =2; i < localBuffer[1]+2; i++){
            if (min > localBuffer[i]){
                min = localBuffer[i];

            }


        }
        localBuffer[1] = 2;
        localBuffer[2] = min;
        localBuffer[3] = max;



    }

/**
 * If the operation_ID is ODDEVEN then in the following lines of code we are calculating
 * how many EVEN and ODD data points there are and assigning it to the designated position in localBuffer[]
 */

    if(localBuffer[0] == ODDEVEN) {
        odd_count = 0;
        even_count = 0;
        for (int i = 2; i < localBuffer[1] +2; i++) {
            if (localBuffer[i] % 2 == 0) {
                even_count +=1;
            } if (localBuffer[i] % 2 != 0) {
                odd_count +=1;

            }




        }
        localBuffer[1] = 2;
        localBuffer[2] = odd_count;
        localBuffer[3] = even_count;


    }

}

void transferring(int sourceBuffer[], int destinationBuffer[]) {
// add you code here
/**
 * The following lines of code is looping through sourceBuffer and
 * destination buffer is set to equal to sourceBuffer
 */
    for(int i = 0; i < sourceBuffer[1] + 2; i++) {
        destinationBuffer[i] = sourceBuffer[i];
    }


}

void submitting(int outputBuffer[]) {
// add you code here
/**
 * The following line of code is submitting the results and the function submit_results
 * returns two values, 0 if results are correct and 1 if the results are not correct
 */
    submit_results(outputBuffer);



}




