
#include <stdio.h>
#include <stdlib.h>

int main(){

    int arrNum[] =  {5,4,7,5,8};
    arrNum[2] = 10;

    for (int i = 0; i < 5; i++)
    {
        printf(" %d ",arrNum[i]);

    }

    int arrsize = 5;
    int arrNum2[arrsize];
    int num;
    for (int i = 0;i < arrsize; i++){
        printf("\nEnter the Number : ");
        scanf("%d",&num);
        arrNum2[i] = num;
    }
        for (int i = 0; i < 5; i++)
    {
        printf(" %d ",arrNum2[i]);

    }
    return 0;
}