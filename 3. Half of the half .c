/*
QUESTION: Given a sequence of 2*k characters, please print every second character from the first half of the sequence. Start printing with the first character.

Input

In the first line of input your are given the positive integer t (1<=t<=100) - the number of test cases. In the each of the next t lines, you are given a sequence of 2*k (1<=k<=100) characters.

Output

For each of the test cases please please print every second character from the first half of a given sequence (the first character should appear).

Example

Input:
4
your 
progress 
is 
noticeable

Output:
y
po
i
ntc
*/


#include <stdio.h>
#include<string.h>

void disp(char n[]);

int main()
{
    int T, fp, n, j, tc;
    char word[200];
    scanf("%d", &tc);
    for(T  = 1; T <= tc; T++){
        scanf("%s", word);
        fp = strlen(word)/2;
        for(j = 0; j < fp; ){
            printf("%c", word[j]);
            j += 2;
        }
        printf("\n");
    }
    return 0;
}


