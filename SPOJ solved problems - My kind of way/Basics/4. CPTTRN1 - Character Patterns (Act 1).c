/*
QUESTION: Using two characters: . (dot) and * (asterisk) print a chessboard-like pattern. The first character printed should be * (asterisk).

Input

You are given t < 100 - the number of test cases and for each of the test cases two positive integers: l - the number of lines and c - the number of columns in the pattern (l, c < 100).

Output

For each of the test cases output the requested pattern (please have a look at the example). Use one line break in between successive patterns.

Example

Input:
3
3 1
4 4
2 5

Output:
*
.
*

*.*.
.*.*
*.*.
.*.*

*.*.*
.*.*.
 		*/


#include <stdio.h>

int main()
{
    int t=0, tc, r, c, i, j;
    scanf("%d", &tc);
    while(t < tc){
        scanf("%d", &r);
        scanf("%d", &c);
        for(i = 0; i < r; i++){
            if(i%2 == 0)
                printf("*");
            else
                printf(".");
        for(j = 1; j < c; j++){
            if(i%2 == 0 && j%2 != 0 || i%2 != 0 && j%2 == 0)
                printf(".");
            else
                printf("*");
        }
        printf("\n");
   }
    t++;
    }
    return 0;
}
