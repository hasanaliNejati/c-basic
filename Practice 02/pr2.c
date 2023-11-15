//perfect number

#include <stdio.h>

int main(){

    int input = 0;
    int sum = 0;

    scanf("%d",&input);
    printf("\n");
    for (int i = 1; i < input; i++)
    {
        if(input % i == 0){
            sum += i;
            printf("+%d",i);
        }
    }
    if(input == sum)
        printf ("\nits a perfect number");
    else 
        printf("\nit is'n a prfect number");



    return 0;
}