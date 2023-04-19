#include <stdio.h>
#include <stdlib.h>
int a , b , c ;
int main()
{
    //the First way to find even & odd by use %
    printf("Enter The value Of Number \n");
    scanf("%d",&a);
    if ( a % 2 == 0){
        printf("The Number is Even \n");
    }
    else {
        printf("The Number Is Odd \n");
    }
    //The second way to find Even & Odd by using And Gate (All odd number should have a 1 on binary )
        printf("Enter The Value Of Number \n");
    scanf("%d",&b);
    if ( b & 1 == 1){
        printf("The Number Is Odd \n");
    }
    else {
        printf("The Number is Even \n");
    }
    //The other way Just use in case there is no flot num
    printf("Enter The value Of Number \n");
    scanf("%d",&c);
    if ( (c/2) * 2 == c){
        printf("The Number is Even \n");
    }
    else {
        printf("The Number Is Odd");
    }
}
