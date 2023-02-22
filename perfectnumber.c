#include <stdio.h>
/*Write a c program to check whether a number is a perfect number or not*/
/*In number theory, a perfect number is a positive 
integer that is equal to the sum of its positive divisors, excluding the number itself.*/
int isPerfect(int number){
    int sum = 0;

    for(int i=1;i<number;i++){
        if(number%i == 0)
        {
            sum+= i;
        }
    }
    if(sum==number){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int number;

    printf("Enter a number to check if it's a Perfect number: ");
    scanf("%d", &number);

    if(isPerfect(number)){
        printf("%d is a Perfect number.\n", number);
    }
    else{
        printf("%d is not a Perfect number.\n", number);
    }

    return 0;
}