/*
QUESTION: Given two natural numbers (both not greater than 200), each number in the separate line, please print the sum of them.

Example

Input:
2
3

Output:
5
		*/



#include <stdio.h>

int main()
{
    int sum = 0, n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    sum = n1+n2;
    printf("%d", sum);
    return 0;
}

