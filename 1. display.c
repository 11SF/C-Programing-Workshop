#include<stdio.h> // import library : standard input output
int main() 
{
    int a;
    float b;
    double c;
    scanf("%d %f %lf",&a, &b, &c);
    /*
    %d  : int
    %f  : float
    %lf : double
    */
    printf("integer is \t%d \nfloat is \t%f \ndouble is \t%.3lf\n",a,b,c);
    // \t : tab
    // \n : new line
    return 0;
}