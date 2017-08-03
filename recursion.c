#include <stdio.h>
int recursion (int x){
        if(x<=2)
            return 1;
        else
            return recursion(x-1)+recursion(x-2);
}
int main()
{
    int n;
    printf("input a number\n");
    scanf("%d",&n);
    int result=recursion(n);
    printf("result is %d",n);
    return 0;
}
