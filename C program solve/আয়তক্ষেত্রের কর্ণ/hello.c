#include<stdio.h>
#include<math.h>
int main()
{
    int a, b;
    float d;
    printf("Enter the length and width: ");
    scanf("%d %d", &a, &b);
    d = sqrt(a * a + b * b);
    printf("The diagonal is: %f", d);
    return 0;
}