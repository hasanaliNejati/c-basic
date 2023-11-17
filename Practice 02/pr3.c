#include <stdio.h>

int main(){


    int lastStepNumber = 1;
    int correntStepNumber = 0;
    int masta = 0;

    int output = 0;

    int check = 1000000000;

    while(1==1){
        //check--;
        if(check <=0 )
            return 0;
        //fibonachi
        masta = lastStepNumber + correntStepNumber;
        lastStepNumber = correntStepNumber;
        correntStepNumber = masta;
        //size == 9
        if(masta > 999999999)
            break;
        if(masta < 100000000)
            continue;
        

        //aval
        for (int i = 2; i < masta; i++){
            
            if(masta % i == 0){
                masta = 0;
                break;
            }
        }
        if(masta != 0)
            output = correntStepNumber;
    }


    printf("%d",output);

    return 0;
}