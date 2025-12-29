#include <stdio.h>
int main ()
{
    int i, s = 0, count = 1;

    for(i=2; i<=500; i=i+3)
    {
        if(count <= 40){
            s = s + i*i;
        }
        else{
            break;
        }
        count++;
    }
    printf("%d", s);
    
    return 0;
}