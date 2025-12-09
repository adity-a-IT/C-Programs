/*WAP to print n terms of the fibonacci sequence */

#include<stdio.h>
                                    /*0 1 1 2 3 5 8 13 21....
                                    fib(0)=0
                                    fib(1)=1
                                    fib(2)=fib(0)+fib(1)
                                    fib(3)=fib(1)+fib(2)
                                    fib(n)=fib(n-2)+fib(n-1)*/
int fib(int n);
int fib(int n){
    if (n==0){
            return 0;
        }
    if(n==1){
            return 1;
    
    }
    int fibNm2= fib(n-2);
    int fibNm1= fib(n-1);
    int fibN=fibNm2 + fibNm1;

    //printf("fib of %d is : %d\n",n, fibN);
    return fibN;
}

int main(){
    int n;
    printf("Enter the number of term :");
    scanf("%d",&n);
    printf("fib of %d is %d",n,fib(n));
    return 0;
}