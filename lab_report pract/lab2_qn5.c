#include <stdio.h>
#include <math.h>

int calcVelocity(double a,double v, double u, double t);
int calcVelocity(double a,double v, double u, double t) {
    if (isnan(a)){
        a = (v-u)/t;
        printf("The value of accelation is: %lf",a);
    } else if (isnan(u)) {
        u = v-a*t;
        printf("The initial speed is: %lf",u);
    } else if (isnan(v)) {
        v = u+a*t;
        printf("The final speed is: %lf",v);
    } else if (isnan(t)) {
        t = (v-u)/a;
        printf("The time is: %lf",t);
    } else {
        printf("WOW you have all the values.");
    }
    return 0;
}

int main() {
    double a,v,u,t;
    printf("Enter a, v, u, t: ");
    scanf("%lf %lf %lf %lf",&a,&v,&u,&t);
    if (a == 999) {
        a = NAN;
    } else if(v == 999) {
        v = NAN;
    } else if(u == 999) {
        u = NAN;
    } else if(t == 999) {
        t = NAN;
    }
    calcVelocity(a,v,u,t);
    return 0;
}