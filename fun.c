#include <stdio.h>
#include <stdlib.h>
int add(int a ,int b)
{
    
    return a+b;
}
int main()
{
    int a=3,b=4;
    int ret;
    int (*p)(int,int);
    p = add;
    ret = p(a,b);
    printf("%d\n",ret);
    
}
