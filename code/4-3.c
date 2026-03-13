#include <stdio.h>

int main()
{
    int x, count = 1;
    scanf("%d",&x);
    
    int i = x / 2 + 1;

    for (int i = 1; i < x / 2 + 1; i++)
        if ( x % i == 0 )
            count++;
        
    
    if(count == 2 )
        printf("true");
    else
        printf("false");
    return 0;
}
