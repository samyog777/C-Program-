# include <stdio.h>

float vel(float a,float v,int t);
float vel(float a,float u,int t) {
    float v = u+a*t;
    return v;
}

int main() {
    float a,u;
    int t;
    printf("Enter a, u and t:");
    scanf("%f %f %d",&a,&u,&t);
    float velocity = vel(a,u,t);
    printf("%f",velocity);
    return 0;
}

