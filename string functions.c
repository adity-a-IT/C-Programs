/*String input function*/

#include<stdio.h>
#include<string.h>
int main(){
    char str_1[100],str_2[200];
    printf("Enter the first string :");
    gets(str_1);

    printf("Enter the second string :");
    gets(str_2);
    int n;
    printf("------------MENU-------------\n");
    printf("choose 1 for reverse of strings\n");
    printf("choose 2 for comparision of strings \n");
    printf("choose 3 for copying of string into ech other \n");
    printf("choose 4 for length of strings\n");
    printf("choose 5 for concat of strings\n");
    printf("Enter your choice : ");
    scanf("%d",&n);
    switch(n){
        case 1: printf("\n\nReverse of first string =%s",strrev(str_1));
                printf("\nReverse of second string =%s\n",strrev(str_2));
                break;
        case 2: printf("\n\nComparision of string 1 and string 2 \n");
                if(strcmp(str_1,str_2)==0){
                    printf("String 1=String 2\n");
                }
                else{
                    printf("Strings are unequal\n");
                }
                break;
        case 3: printf("Copy of string 2 into string 1 =%s\n",strcpy(str_1,str_2));
                break;
        case 4: printf("length of string 1=%s\n",strlen(str_1));
                printf("Length of string 2=%s\n",strlen(str_2));
                break;
        case 5: printf("concat of strings are=%s\n",strcat(str_1,str_2));
                break;
        default: printf("No valid choice !!\n Please enter a valid choice!!");
        

    
    }    
    return 0;

}