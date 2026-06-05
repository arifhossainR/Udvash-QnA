#include<stdio.h>

int main()
{
    int marks[10] = {85, 90, 78, 92, 88, 95, 80, 91, 89, 94};
    int i;
    int max = marks[0];
    for(i = 0; i < 10; i++)
    {
        if(marks[i] > max)
        {
            max = marks[i];
        }
    }
    printf("The highest mark is: %d", max);
    return 0;
}