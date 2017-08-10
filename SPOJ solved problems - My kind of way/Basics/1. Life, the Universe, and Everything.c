/*

QUESTION: Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.

Interactive Protocol

You should communicate with Judge using standard input and output.

Attention: the program should clear the output buffer after printing each line.

It can be done using fflush(stdout) command or by setting the proper type of buffering at the beginning of the execution - setlinebuf(stdout).
Each time the judge will give you a number. You should rewrite this number to standard output. If this number equals 42, after rewriting your program should terminate immediately.

Example

The example of communication.

Input:
3
15
42

Output:
3
15
42
		*/


#include <stdio.h>

int main()
{
    int i;
    int arr[100];
    for(i=0; i<100; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d\n", arr[i]);
        if(arr[i] == 42 ){
            break;
            exit(1);
        }
        fflush(stdout);
    }
    return 0;
}

