/*
QUESTION: Using two characters: . (dot) and * (asterisk) print a frame-like pattern.

Input

You are given t - the number of test cases and for each of the test cases two positive integers: l - the number of lines and c - the number of columns of a frame.

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
*
*

****
*..*
*..*
****


*****
*****
		*/


#include <stdio.h>

int main()
{
    int t=1, tc, maxcount, r, c, i, j, nl;
    scanf("%d", &tc);
    maxcount = tc;
    while(t <= tc){
        scanf("%d%d", &r,&c);
        for(i = r; i > 0; i--){
            for(j = c; j > 0; j--){
                if(i == 1 || j == 1 || i == r || j == c)
                    {
                    printf("*");
                    }
                else
                    printf(".");
        }
        printf("\n");
    }
    int tl = t++;
    if(tl < maxcount){
        for(nl = 1; nl <= tl; nl++)
            printf("\n");
    }
    }
    return 0;
}

