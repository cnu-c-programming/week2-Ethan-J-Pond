#include <stdio.h>

int main()
{
    char operator;
    int x, y;  
    scanf("%d %d %c",&x,&y,&operator);
    switch(operator){
        case '+' :
            printf("%d\n",x+y);
            break;
        case '-' :
            printf("%d\n",x-y);
            break;
        case '*' :
            printf("%d\n",x*y);
            break;
        case '/' :
            printf("%d\n",x/y);
            break;
        default:
            printf("안돼!!!\n %d %d %d %d",'+','-','*','/');
    }
    return 0;
}
