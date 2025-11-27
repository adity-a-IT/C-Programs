// printing the greatest of three numbers.
#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("Enter the numbers:");
    scanf("%d %d %d",&a,&b,&c);
    // (a>b)? printf("a\n") : printf("b\n");
    max=(a>b)?((a>c)? a:c) : ((b>c)? b:c);
    printf("%d\n", max);
    return 0;
}