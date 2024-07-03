#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int x;
    printf("Enter Any Number = ");
    scanf("%d",&x);
    
    double result = sqrt(x);
    printf("%.2lf",result);

}
