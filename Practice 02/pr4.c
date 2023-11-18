#include <stdio.h>

int main (){
    int input;
    scanf("%d",&input);

    int masta = input;
    while (masta > 0){
        
        for (int i = 2; i < masta; i++)
        {
            if(masta % i == 0)
            {
                printf ("No \nBecause %d / %d",masta,i);
                return 0;
            }
            
        }
        masta /= 10;
    }
    

    printf("Yes");

}