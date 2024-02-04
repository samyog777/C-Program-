#include <stdio.h>

void equation(double a,double b, double c, double d, double e, double f);
void equation(double a,double b, double c, double d, double e, double f) {
    double determine = a*e-b*d;
    if(determine == 0) {
        printf("Parallel number cannot find determine!");
    } else {
        double x = (a*f-d*c)/determine;
        double y = (e*c-b*f)/determine;
        printf("The value of x is: %lf",x);
        printf("The value of y is: %lf",y);

    }
}

int main() {
    double a,b,c,d,e,f;
    printf("Enter a,b,c,d,e and f: ");
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
    equation(a,b,c,d,e,f);
    return 0;
}
