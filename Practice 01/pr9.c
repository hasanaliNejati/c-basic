#include <stdio.h>


int sumOfNumbers(int input){
    int sum = 0;
    //gheime ha ro rikhtim to masta
    int masta = input;
    do{
        sum += masta % 10;
        masta /= 10;
    }while(masta > 0);
    printf("number was : %d and sum of numbers is : %d\n",input,sum);
    return sum;
}

int main(){
    int input;

    do{
        scanf("%d",&input);
        if(input == 0)
            break;
        sumOfNumbers(input);

    }while(1 == 1);
    
    return 0;
}

