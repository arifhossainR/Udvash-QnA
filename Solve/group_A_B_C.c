#include<stdio.h>

int main()
{
    int roll;
    printf("Enter a roll number: ");
    scanf("%d", &roll);

    if(roll >= 1 && roll <= 50){
        printf("Group A.");
    }
    else if(roll >= 51 && roll <= 100){
        printf("Group B.");
    }
    else if(roll >= 101 && roll <= 200){
        printf("Group C.");
    }
    else{
        printf("Invalid roll number.");
    }
    return 0;
}