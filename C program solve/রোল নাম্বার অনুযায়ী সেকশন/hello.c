#include<stdio.h>

int main()
{
    int roll;
    printf("Enter your roll number: ");
    scanf("%d", &roll);

    if(roll >= 1 && roll <= 30){
        printf("Group A.");
    }
    else if(roll >= 31 && roll <= 60) {
        printf("Group B.");
    }
    else if(roll >= 61 && roll <= 100) {
        printf("Group C.");
    }
    else {
        printf("Invalid roll number.");
    }
    return 0;
}