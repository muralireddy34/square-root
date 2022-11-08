#include <stdio.h>
#include <math.h>

const double a;
double b;



double squareRoot(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(a);
    }
}




int main()
{
    scanf("%f", &a);
    b = squareRoot(a);
    printf("%f", b);
    return 0;
}
