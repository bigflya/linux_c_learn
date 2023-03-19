#include <stdio.h>
#include <stdlib.h>
//现在的做法
int print_arr(int p[])
{
    int i;
    i = sizeof(p);
    printf("%d",i);
    
}
int main()
{	

    int a[] = {1,3,5,7,9};//32位系统一个int占4个字节
    printf("%ld\n",sizeof(a));

    print_arr(a);
	
    exit(0);
    
    
}
