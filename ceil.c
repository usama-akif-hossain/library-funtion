#include <stdio.h>
#include <math.h>

int main () {
    double x = 5.1;// it wil be show the next whole number.
    double result = ceil(x);
    printf("ceil(%.2lf) =%.2lf\n",x,result);
}