// switch condition

#include<stdio.h>
int main() {
    int number; 
    printf("enter the number between 1 to 5:");
    scanf("%d",&number);

    switch(number) {
        case 1: printf("You choose one\n");
                break;
        case 2: printf("You choose two\n");
                break;
        case 3: printf("You choose three\n");
                break;
        case 4: printf("You choose four\n");
                break;
        case 5: printf("You choose five\n");
                break;
        
        default: printf("Not a valid number.Plese choose between 1 to 5!\n");
    }
    return 0;
} 