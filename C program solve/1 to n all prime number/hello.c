#include<stdio.h>

int main()
{
    int i, j, n, status;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=2; i<=n; i++)
    {
        status = 0;
        for(j=2; j<i; j++)
        {
            if(i%j==0){
                status=1;
                break;
            }
        }
        if(status==0){
            printf("%d ", i);
        }
    }
    return 0;
}