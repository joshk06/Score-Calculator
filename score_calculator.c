#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
 
int main()
{
int i;
int r;
int a;
int b;
float x;
float y;
char answer;

printf("Amount of runs: ");
scanf("%d", &r);
printf("Enter the numerator a (>=100): ");
scanf("%d", &a);
printf("Enter the denominator b: ");
scanf("%d", &b);
for(i = 0 ; i < r ; ++i) {
    printf("Enter the original score: ");
    scanf("%f", &x);
    //formula
    y = x*a/b;
    //print the result
    printf("The new score is %.2f\n", y);
}
Sleep(10000);
}