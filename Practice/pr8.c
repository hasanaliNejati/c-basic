#include <stdio.h>

int main(){
    int input;
    scanf("%d",&input);
    int sum = 0;
    //gheime ha ro rikhtim to masta
    int masta = input;
    do{
        sum += masta % 10;
        masta /= 10;
    }while(masta > 0);

    printf("number was : %d and sum of numbers is : %d",input,sum);

}