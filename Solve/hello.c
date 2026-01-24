#include <stdio.h>
int main()
{
    int i;
    for(i=3; i<=15; i=i+2)
    {
        if(i == 7 || i > 12)
            continue;
        printf("ICT");
    }
    return 0;
}