//pr 01 palindrom number

#include <stdio.h>

int main(){

    int input;
    int masta = 0;
    int reverce = 0;
    scanf("%d",&input);
    masta = input;
    while(masta > 0)
    {
        reverce *= 10;
        reverce += masta % 10;
        masta /= 10;

        //printf("\nreverve : %d , input %d , masta %d",reverce,input,masta);
    }

    
    if(reverce == input)
        printf("its palindrom");
    else
        printf("its not palindrom");

    return 0;
}