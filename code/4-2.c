#include <stdio.h>

int main()
{
    for(int x = 1 ; x < 10 ; x++)
        for(int y = 1 ; y < 10 ; y++)
            printf("%d * %d = %d\n",x,y,x*y);
    
    
    return 0;
}
