#include <stdio.h>
int main ()
{
    int i = 2, s = 0, count = 1;

    while(1)
    {
        if(count <= 40){
            s = s + i*i;
            count = count + 1;
        }
        else{
            break;
        }
        i = i + 3;
    }
    printf("%d", s);
    
    return 0;
}