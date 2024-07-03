#include <stdio.h>
#include <math.h>

int main () {
    double x = 5.5;// when it will be 5.5 then it show 6.00
    double result = round(x);
    printf("round(%.2lf) =%.2lf\n",x,result);
}