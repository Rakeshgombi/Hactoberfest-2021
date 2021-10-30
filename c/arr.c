#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank is the best place to learn and practice coding!";
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    scanf("%d%lf\n%s", &i, &d,s);
    int add=i+d;
    printf("%d\n",add);
    int sub=i-d;
    printf("%d\n",sub);
    printf("%s",s);
    return 0;
}