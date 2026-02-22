#include<stdio.h>

int main()
{
    int i, n, arr[7] = {17, 35, 9, 23, 15, 39, 27};
    printf("Enter a number to search: ");
    scanf("%d", &n);
    for(i = 0; i < 7; i++)
    {
        if(arr[i] == n)
        {
            printf("Number found at position %d\n", i+1);
            break;
        }
    }
    if(i == 7){
        printf("Number not found\n");
    }
    return 0;
}