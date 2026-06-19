#include<stdio.h>
int main()
{
    int R;
    scanf("%d",&R);
    if(R >= 1 && R <= 30){
        printf("Group A");
    }
    else if(R >= 31 && R <= 60){
        printf("Group B");
    }
    else if(R >= 61 && R <= 100){
        printf("Group C");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}