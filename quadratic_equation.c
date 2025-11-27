#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,Root1,Root2;

    printf("enter a ,b and c");
    scanf("%f %f %f", &a , &b , &c);

    d= b*b-(4*a*c);

    if(a==0) {
        printf("It isn't a quadratic equation\n");
    }
    else if(d>0) {
        Root1 = (-b+sqrt(d))/(2*a);
        Root2 = (-b-sqrt(d))/(2*a);
        
        printf("Roots are real and uequal\n");
        printf("Root=%.2f\n", Root1);
        printf("Root=%.2f\n", Root2);
    }
    else if (d==0) {
        Root1=Root2= -b/(2*a);
        printf("Roots are real and equal\n");
        printf("Root=%.2f\n", Root1);
    }
    else if (d<0) {
        printf("Roots are imaginary !");
    }
    return 0;
}
