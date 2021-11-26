#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    // Read and save an integer, double, and String to your variables.
    
    
    int a1;
    double b1;
    char c1[100];
    
    scanf("%d",&a1);
    scanf("%lf", &b1);
    scanf("%*[\n] %[^\n]",c1);
   
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + a1);

    
    // Print the sum of the double variables on a new line.
    printf("%.01lf\n", d + b1);


    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s", s, c1);

    return 0;
}