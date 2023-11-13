#include <stdio.h>



int factorial(int n){
    int output = 1;
    for (int i = 2; i <= n; i++)
    {
        output *= i;
    }
    return output;
}

int main(){
    int n;
    scanf("%d",&n);

    float output;
    for (int i = 1; i <= n; i++)
    {
        //printf ("\ncheck : %d    %d    %d",n,i,factorial(i));
        output += (float)1.0 / (float)factorial(i);
    }
    printf("%f",output);
}

