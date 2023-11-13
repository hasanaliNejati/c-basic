#include <stdio.h>

int main(){
    int count;
    int sum=0;
    float avarage;

    while(1==1){
        int input;
        scanf("%d",&input);
        //printf("%d\n",input);
        if(input == 0)
            break;
        sum+= input;
        //printf("%d\n",sum);

        count++;
    }

    avarage = (float)sum/(float)count;
    printf("count = %d \nsum = %d \n avarage = %f",count,sum,avarage);
}