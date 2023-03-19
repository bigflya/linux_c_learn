#include <stdio.h>
#include <stdlib.h>
int add(int a ,int b)
{
    
    return a+b;
}
int main()
{
    int a=3,b=4,i;
    int ret;
    int (*funcp[2])(int,int);
    funcp[0] = add;
    //funcp[1] = sub?
    for(i= 0;i<1;i++)
    {
        ret=funcp[i](a,b);
         printf("%d\n",ret);
    }
    
   
    
}
